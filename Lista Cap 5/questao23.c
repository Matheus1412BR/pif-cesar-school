#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main(void) {
    printf("=== Teste 1: Macro sem parenteses vs Funcao ===\n");
    printf("DOBRO(2+3) sem parenteses = %d\n", DOBRO(2+3));
    printf("dobro(2+3) funcao         = %d\n", dobro(2+3));

    #undef DOBRO
    #define DOBRO(x) ((x) * 2)

    printf("\n=== Teste 2: Macro corrigida com parenteses ===\n");
    printf("DOBRO(2+3) com parenteses = %d\n", DOBRO(2+3));

    return 0;
}

int dobro(int x) {
    return x * 2;
}
