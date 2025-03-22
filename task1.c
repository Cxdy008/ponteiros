#include <stdio.h>

int main() {
    // criando duas variáveis inteiras
    int x, y;
    /*
    O operador ternário é uma forma de simplificar um if-else
    O operador ternário é composto por três partes:
    - A primeira parte é a condição que será avaliada
    - A segunda parte é o valor que será retornado caso a condição seja verdadeira
    - A terceira parte é o valor que será retornado caso a condição seja falsa
    */
    printf("Maior endereco: %p\n", &x > &y ? &x : &y);

    return 0;
}