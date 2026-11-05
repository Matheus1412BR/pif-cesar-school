#include <stdio.h>
#include <math.h>

int main() {
    char op;
    double a, b;
    printf("Escolha a operacao (+, -, *, /, ^): ");
    scanf(" %c", &op);
    printf("Digite dois operandos: ");
    scanf("%lf %lf", &a, &b);

    switch(op) {
        case '+': printf("Resultado: %.2lf\n", a + b); break;
        case '-': printf("Resultado: %.2lf\n", a - b); break;
        case '*': printf("Resultado: %.2lf\n", a * b); break;
        case '/': 
            if (b == 0) printf("Erro: Divisao por zero!\n");
            else printf("Resultado: %.2lf\n", a / b);
            break;
        case '^': printf("Resultado: %.2lf\n", pow(a, b)); break;
        default: printf("Operacao invalida!\n"); break;
    }
    return 0;
}
