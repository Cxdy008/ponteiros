#include <stdio.h>

void absoluteFrequency(int *array, int size, int *freq) {
    for (int i = 0; i < size; i++) {
        freq[array[i]]++;
    }
}

void relativeFrequency(int *array, int size, float *freq) {
    int freqAbs[10] = {0};
    absoluteFrequency(array, size, freqAbs);

    for (int i = 0; i < 10; i++) {
        freq[i] = (float) freqAbs[i] / size;
    }
}
int main(){
    int size;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &size);

    int array[size];
    printf("Digite os elementos do vetor: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    float freq[10] = {0};
    relativeFrequency(array, size, freq);
    
    printf("Frequência relativa dos números de 0 a 9:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: %.2f%%\n", i, freq[i] * 100);
    }

    return 0;
}