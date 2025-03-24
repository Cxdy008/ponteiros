#include <stdio.h>

int main() {
    // criando um vetor de 10 números reais
    float numbers[10];
    // lendo os 10 números
    for(int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%f", &numbers[i]);
    }
    // imprimindo os endereços de cada número
    for(int i = 0; i < 10; i++) {
        printf("Endereço de %.2f: %p\n", numbers[i], &numbers[i]);
    }
    return 0;
}