#include <stdio.h>

int main() {
    float sal, aumento = 0;
    int cargo;
    printf("Salario e cargo (1=Tecnico, 2=Gerente, 3=Demais): ");
    scanf("%f %d", &sal, &cargo);

    switch(cargo) {
        case 1: aumento = (sal <= 3000) ? sal * 0.15f : sal * 0.10f; break;
        case 2: aumento = (sal <= 5000) ? sal * 0.10f : sal * 0.05f; break;
        case 3: aumento = sal * 0.08f; break;
        default: printf("Cargo invalido!\n"); return 1;
    }
    printf("Aumento: R$ %.2f\nNovo salario: R$ %.2f\n", aumento, sal + aumento);
    return 0;
}
