#include <stdio.h>

int main() {
    int id_servidor;
    float salario;
    char turno;

    // Atribuindo valores
    id_servidor = 101;
    salario = 3500.50;
    turno = 'M';

    // Imprimindo valores
    printf("Valores das variaveis:\n");
    printf("ID do servidor: %d\n", id_servidor);
    printf("Salario: %.2f\n", salario);
    printf("Turno: %c\n\n", turno);

    // Imprimindo endereços de memória
    printf("Enderecos de memoria:\n");
    printf("Endereco de id_servidor: %p\n", &id_servidor);
    printf("Endereco de salario: %p\n", &salario);
    printf("Endereco de turno: %p\n", &turno);

    return 0;
}