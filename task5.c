#include <stdio.h>

void sumAndSubtract(int a, int b, int *sum, int *sub) {
    *sum = a + b;
    *sub = a - b;
}

int main() {
    int a, b, sum, sub;

    printf("Insira dois números inteiros: ");
    scanf("%d %d", &a, &b);

    sumAndSubtract(a, b, &sum, &sub);
    printf("Soma: %d\nSubtração: %d\n", sum, sub);

    return 0;
}