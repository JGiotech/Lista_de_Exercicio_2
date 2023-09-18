#include <stdio.h>

int main() {
    float valor, soma = 0;
    int numerosdePositivos = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%f", &valor);

        if (valor > 0) {
            numerosdePositivos++;
            soma += valor;
        }
    }

    printf("%d valores positivos\n", numerosdePositivos);

    if (numerosdePositivos > 0) {
        printf("%.1f\n", soma / numerosdePositivos);
    } 

    return 0;
}