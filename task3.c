#include <stdio.h>

int main() {
    // criando um vetor de 5 números inteiros
    int numbers[5];
    // criando um ponteiro para inteiros
    int *p;
    // atribuindo o endereço do vector ao ponteiro
    p = numbers;
    // lendo os 5 números
    for(int i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &p[i]);
    }
    // imprimindo o dobro de cada número
    for(int i = 0; i < 5; i++) {
        printf("O dobro de %d é %d\n", numbers[i], 2*numbers[i]);
    }

    return 0;
}