#include <stdio.h>
#include <stdlib.h>

int main() {
    int qtd;
    
    printf(" quantidade de aluno: ");
    scanf("%d", &qtd);
    
    int *matriculas = malloc(qtd * sizeof(int));

    if (matriculas == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < qtd; i++) {
        matriculas[i] = 1000 + i;
    }

    printf(" Matrículas dos alunos:\n");
    for (int i = 0; i < qtd; i++) {
        printf("%d\n", matriculas[i]);
    }

    free(matriculas);
    return 0;
}