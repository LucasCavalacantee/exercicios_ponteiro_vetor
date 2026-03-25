#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *vetor;
    double soma = 0;
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
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    menor = vetor[0];
    maior = vetor[0];
    for (i = 1; i < n; i++) {
        if (vetor[i] < menor) menor = vetor[i];
        if (vetor[i] > maior) maior = vetor[i];
    }

    printf("Media: %.2f\n", soma / n);
    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);

    free(vetor);
    return 0;
}
