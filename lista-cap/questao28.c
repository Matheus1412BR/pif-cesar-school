#include <stdio.h>

int main() {
    int op;
    printf("1-Saldo\n2-Extrato\n3-Transferencia\n4-Atendente\nOpcao: ");
    scanf("%d", &op);

    switch(op) {
        case 1: printf("Consulta de Saldo\n"); break;
        case 2: printf("Emissao de Extrato\n"); break;
        case 3: printf("Transferencia Bancaria\n"); break;
        case 4: printf("Falar com Atendente\n"); break;
        default: printf("Erro: Opcao invalida!\n"); break;
    }
    return 0;
}
