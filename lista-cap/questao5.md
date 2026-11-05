a) Saída:
a=0, b=5, c=8
Na condição if (a != 0 && ++b > 5), a primeira expressão (a != 0) avalia para falso (0 != 0). Devido à avaliação de curto-circuito do operador &&, a segunda subexpressão (++b > 5) nem sequer é avaliada. Dessa forma, o incremento ++b não ocorre, mantendo b = 5. O bloco else é executado, resultando em c = c - 2 (10 - 2 = 8).
b)
Operador E (&&): Se a primeira subexpressão for avaliada como falsa, o resultado global da condição será obrigatoriamente falso. A segunda subexpressão é ignorada (não executada).

Operador OU (||): Se a primeira subexpressão for avaliada como verdadeira, o resultado global da condição será obrigatoriamente verdadeiro. A segunda subexpressão é ignorada (não executada).
c) Valor final de b: 5
Valor final de c: 20
