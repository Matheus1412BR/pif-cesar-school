a) Efeito prático de if (x = 0) em vez de if (x == 0)
- Atribuição (x = 0): O operador de atribuição = sobrescreve o valor armazenado na variável x, definindo-o como 0. Em seguida, a própria expressão (x = 0) avalia para o valor atribuído, que é 0. Na linguagem C, 0 é interpretado semanticamente como falso. Portanto, o bloco do if nunca será executado, e o controle de fluxo passará para a cláusula else (caso exista) ou para a próxima instrução do programa.
- Comparação (x == 0): O operador de igualdade == não altera o valor contido em x. Ele realiza um teste lógico: retorna 1 (verdadeiro) se o valor de x for igual a 0, e 0 (falso) caso contrário.

b) Interpretação de valores numéricos condicionais no padrão C
- Verdadeiro: Qualquer valor numérico (inteiro ou de ponto flutuante) diferente de zero (ex: 1, -5, 3.14, -0.001) é interpretado como verdadeiro (true).
- Falso: O valor numérico estritamente igual a zero (0 ou 0.0) e ponteiros nulos (NULL) são interpretados como falso (false).

c) Análise da instrução if (x = -5)
O bloco de código associado ao if (x = -5) será executado, pois a expressão realiza uma atribuição de valor -5 à variável x. Como o resultado da expressão é o próprio valor atribuído (-5), o compilador avalia a condição como um número não nulo. De acordo com o padrão ANSI C, qualquer valor diferente de 0 é considerado verdadeiro, fazendo com que a condição do if seja satisfeita.
