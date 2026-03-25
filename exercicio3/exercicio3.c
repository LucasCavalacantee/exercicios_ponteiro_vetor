#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    double *notas, *p;
    double soma = 0, media;
    int acima = 0;

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    notas = (double *)malloc(n * sizeof(double));
    if (notas == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%lf", notas + i);
        soma += *(notas + i);
    }

    media = soma / n;
    printf("Media da turma: %.2f\n", media);

    for (p = notas; p < notas + n; p++) {
        if (*p > media) acima++;
    }

    printf("Numero de alunos acima da media: %d\n", acima);

    free(notas);
    return 0;
}
