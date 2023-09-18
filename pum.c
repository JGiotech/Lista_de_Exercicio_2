#include <stdio.h>

int main() {
    int numerolinhas;
    int valor = 1;

    scanf("%d", &numerolinhas);

    for (int i = 0; i < numerolinhas; i++) {
        printf("%d %d %d PUM\n", valor, valor + 1, valor + 2);
        valor += 4;
    }

    return 0;
}