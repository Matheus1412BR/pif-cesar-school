#include <stdio.h>

int main() {
    float val;
    int est;
    printf("Valor do produto e estado (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%f %d", &val, &est);

    switch(est) {
        case 1: printf("Total com imposto (MG 7%%): R$ %.2f\n", val * 1.07f); break;
        case 2: printf("Total com imposto (SP 12%%): R$ %.2f\n", val * 1.12f); break;
        case 3: printf("Total com imposto (RJ 15%%): R$ %.2f\n", val * 1.15f); break;
        case 4: printf("Total com imposto (MS 8%%): R$ %.2f\n", val * 1.08f); break;
        default: printf("Erro: Estado invalido!\n"); break;
    }
    return 0;
}
