#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *a, *b, *c;

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));
    b = (int *)malloc(n * sizeof(int));
    c = (int *)malloc(n * sizeof(int));
    if (a == NULL || b == NULL || c == NULL) {
        printf("Erro ao alocar memoria.\n");
        free(a);
        free(b);
        free(c);
        return 1;
    }

    printf("Digite os elementos do vetor A:\n");
    for (i = 0; i < n; i++) {
        printf("A[%d]: ", i + 1);
        scanf("%d", a + i);
    }

    printf("Digite os elementos do vetor B:\n");
    for (i = 0; i < n; i++) {
        printf("B[%d]: ", i + 1);
        scanf("%d", b + i);
    }

    printf("Vetor C (A - B):\n");
    for (i = 0; i < n; i++) {
        *(c + i) = *(a + i) - *(b + i);
        printf("C[%d] = %d\n", i + 1, *(c + i));
    }

    free(a);
    free(b);
    free(c);
    return 0;
}
