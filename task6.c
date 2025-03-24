#include <stdio.h>

// Função para encontrar os dois maiores números entre quatro inteiros
void encontrarDoisMaiores(int a, int b, int c, int d, int *maior1, int *maior2) {
    int numeros[4] = {a, b, c, d};

    // Ordenar os números em ordem decrescente (simples seleção)
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (numeros[i] < numeros[j]) {
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    // Os dois maiores números estarão nas primeiras posições
    *maior1 = numeros[0];
    *maior2 = numeros[1];
}

int main() {
    int a, b, c, d;
    char continuar;

    do {
        // Ler quatro números inteiros
        printf("Digite quatro números inteiros separados por espaço: ");
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int maior1, maior2;
        // Chamar a função para encontrar os dois maiores números
        encontrarDoisMaiores(a, b, c, d, &maior1, &maior2);

        // Exibir os dois maiores números
        printf("Os dois maiores números são: %d e %d\n", maior1, maior2);

        // Perguntar se o usuário deseja continuar
        printf("Deseja inserir outro conjunto de números? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}