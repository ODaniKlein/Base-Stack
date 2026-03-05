#include <stdio.h>
#include <stdlib.h>

struct Departamento {
    int id_departamento;
    int qtd_funcionarios;
    int *matriculas_funcionarios; 
};

int main() {
    struct Departamento ti;

    ti.id_departamento = 404;

    printf("Digite a quantidade de funcionarios na TI hoje: ");
    if (scanf("%d", &ti.qtd_funcionarios) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (ti.qtd_funcionarios <= 0) {
        printf("Quantidade invalida. Encerrando.\n");
        return 1;
    }

    ti.matriculas_funcionarios = (int*)malloc(ti.qtd_funcionarios * sizeof(int));

    if (ti.matriculas_funcionarios == NULL) {
        printf("Erro: Nao foi possivel alocar memoria.\n");
        return 1;
    }

    printf("\nDigite as matrículas dos funcionarios:\n");
    for (int i = 0; i < ti.qtd_funcionarios; i++) {
        printf("Matricula %d: ", i + 1);
        scanf("%d", &ti.matriculas_funcionarios[i]);
    }

    printf("\n--- Lista de Funcionarios do Departamento %d ---\n", ti.id_departamento);
    for (int i = 0; i < ti.qtd_funcionarios; i++) {
        printf("Funcionario %d: Matricula %d\n", i + 1, ti.matriculas_funcionarios[i]);
    }

    free(ti.matriculas_funcionarios);
    
    ti.matriculas_funcionarios = NULL;

    printf("\nMemoria liberada com sucesso.\n");

    return 0;
}