#include <stdio.h>

int main() {
    int senhas_atendimento[5];

    for (int i = 0; i < 5; i++) {
        senhas_atendimento[i] = 101 + i;
    }

    printf("Endereco da primeira posicao: %p\n", (void*)&senhas_atendimento[0]);
    printf("Endereco da segunda posicao: %p\n", (void*)&senhas_atendimento[1]);

    long diferenca = (char*)&senhas_atendimento[1] - (char*)&senhas_atendimento[0];
    printf("Diferenca em bytes: %ld\n", diferenca);

    return 0;
}