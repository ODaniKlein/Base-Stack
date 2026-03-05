#include <stdio.h>
#include <stdlib.h>

int main() {

    int *protocolo_urgente;

    protocolo_urgente = malloc(sizeof(int));

    if (protocolo_urgente == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    *protocolo_urgente = 999;

    printf("Valor armazenado: %d\n", *protocolo_urgente);

    free(protocolo_urgente);

    return 0;
}