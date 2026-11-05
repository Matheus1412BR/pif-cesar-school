#include <stdio.h>

int main() {
    int ano;
    printf("Digite um ano inteiro positivo: ");
    if (scanf("%d", &ano) != 1 || ano <= 0) return 1;

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d eh bissexto.\n", ano);
    } else {
        printf("O ano %d NAO eh bissexto.\n", ano);
    }
    return 0;
}
