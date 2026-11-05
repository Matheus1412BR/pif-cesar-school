#include <stdio.h>

int main() {
    int m, ano, bis;
    printf("Mes e ano: ");
    scanf("%d %d", &m, &ano);
    bis = (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);

    switch(m) {
        case 1: printf("Janeiro - 31 dias\n"); break;
        case 2: printf("Fevereiro - %d dias\n", bis ? 29 : 28); break;
        case 3: printf("Marco - 31 dias\n"); break;
        case 4: printf("Abril - 30 dias\n"); break;
        case 5: printf("Maio - 31 dias\n"); break;
        case 6: printf("Junho - 30 dias\n"); break;
        case 7: printf("Julho - 31 dias\n"); break;
        case 8: printf("Agosto - 31 dias\n"); break;
        case 9: printf("Setembro - 30 dias\n"); break;
        case 10: printf("Outubro - 31 dias\n"); break;
        case 11: printf("Novembro - 30 dias\n"); break;
        case 12: printf("Dezembro - 31 dias\n"); break;
        default: printf("Mes invalido!\n"); break;
    }
    return 0;
}
