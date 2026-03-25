#include <stdio.h>
#include <stdlib.h>

/* Calcula o fatorial de n. Retorna -1 para n negativo.
   Atencao: long long suporta fatorial de no maximo 20. */
long long fatorial(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return 1;
    if (n > 20) {
        printf("Aviso: fatorial(%d) excede o limite de long long.\n", n);
        return -1;
    }
    long long resultado = 1;
    int i;
    for (i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n, i;
    int *vetor, *p;
    int menor, maior;

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", vetor + i);
    }

    menor = *vetor;
    maior = *vetor;
    for (p = vetor + 1; p < vetor + n; p++) {
        if (*p < menor) menor = *p;
        if (*p > maior) maior = *p;
    }

    long long fat_menor = fatorial(menor);
    long long fat_maior = fatorial(maior);

    if (fat_menor >= 0)
        printf("Menor: %d  ->  Fatorial: %lld\n", menor, fat_menor);
    else
        printf("Menor: %d  ->  Fatorial: nao calculavel\n", menor);

    if (fat_maior >= 0)
        printf("Maior: %d  ->  Fatorial: %lld\n", maior, fat_maior);
    else
        printf("Maior: %d  ->  Fatorial: nao calculavel\n", maior);

    free(vetor);
    return 0;
}
