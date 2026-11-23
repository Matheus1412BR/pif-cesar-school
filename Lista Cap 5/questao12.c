#include <stdio.h>

void exibeMenu(void);

int main(void) {
    int opcao;

    exibeMenu();
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Opcao selecionada: Cadastrar novo registro.\n");
            break;
        case 2:
            printf("Opcao selecionada: Listar registros cadastrados.\n");
            break;
        case 3:
            printf("Opcao selecionada: Remover registro.\n");
            break;
        case 0:
            printf("Encerrando o programa...\n");
            break;
        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
    }

    return 0;
}

void exibeMenu(void) {
    printf("=== MENU PRINCIPAL ===\n");
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
    printf("======================\n");
}
