#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *vetor, *p;

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

    printf("Vetor em ordem inversa:\n");
    for (p = vetor + n - 1; p >= vetor; p--) {
        printf("%d ", *p);
    }
    printf("\n");

    free(vetor);
    return 0;
}
