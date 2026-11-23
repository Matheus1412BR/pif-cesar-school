#include <stdio.h>

long potencia(int base, int expoente);

int main(void) {
    int base, expoente;

    printf("Digite a base (inteiro): ");
    scanf("%d", &base);
    printf("Digite o expoente (inteiro nao negativo): ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Erro: o expoente deve ser nao negativo!\n");
        return 1;
    }

    printf("%d elevado a %d = %ld\n", base, expoente, potencia(base, expoente));

    return 0;
}

long potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    return (long)base * potencia(base, expoente - 1);
}
