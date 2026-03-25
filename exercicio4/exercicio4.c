#include <stdio.h>
#include <stdlib.h>

void lerVetor(int *vetor, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", vetor + i);
    }
}

int main() {
    int n;
    int *vetor, *p;
    int primeiro;
    int maiores = 0, menores = 0, iguais = 0;

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    lerVetor(vetor, n);

    primeiro = *vetor;
    for (p = vetor + 1; p < vetor + n; p++) {
        if (*p > primeiro) maiores++;
        else if (*p < primeiro) menores++;
        else iguais++;
    }

    printf("Primeiro elemento: %d\n", primeiro);
    printf("Elementos maiores que o primeiro: %d\n", maiores);
    printf("Elementos menores que o primeiro: %d\n", menores);
    printf("Elementos iguais ao primeiro: %d\n", iguais);

    free(vetor);
    return 0;
}
