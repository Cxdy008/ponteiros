#include <stdio.h>
// Função que atualiza os valores de um vetor com um valor inteiro
void atualizarVetor(int *vetor, int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        *(vetor + i) = valor;
    }
}
// Função que imprime os valores de um vetor
void imprimirVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(vetor + i));
    }
    printf("\n");
}

int main() {
    int tamanho, valor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    atualizarVetor(vetor, tamanho, valor);

    printf("Valores atualizados no vetor: ");
    imprimirVetor(vetor, tamanho);

    return 0;
}