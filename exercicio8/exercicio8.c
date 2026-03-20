#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i;
    int *a, *b, *c;

    printf("Digite o numero de elementos do vetor A (N): ");
    scanf("%d", &n);

    printf("Digite o numero de elementos do vetor B (M): ");
    scanf("%d", &m);

    a = (int *)malloc(n * sizeof(int));
    b = (int *)malloc(m * sizeof(int));
    c = (int *)malloc((n + m) * sizeof(int));
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
    for (i = 0; i < m; i++) {
        printf("B[%d]: ", i + 1);
        scanf("%d", b + i);
    }

    for (i = 0; i < n; i++) {
        *(c + i) = *(a + i);
    }
    for (i = 0; i < m; i++) {
        *(c + n + i) = *(b + i);
    }

    printf("Vetor C (A concatenado com B):\n");
    for (i = 0; i < n + m; i++) {
        printf("C[%d] = %d\n", i + 1, *(c + i));
    }

    free(a);
    free(b);
    free(c);
    return 0;
}
