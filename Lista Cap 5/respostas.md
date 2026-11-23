Questão 01

a) Identificação e papel de cada etapa da função celsius():
- Protótipo (Declaração): float celsius(float); (antes da main()).
  Papel: Informa antecipadamente ao compilador o nome da função, o tipo de dado que ela retorna (float) e a quantidade e os tipos dos parâmetros esperados (float), sem expor sua implementação interna.
- Chamada (Invocação): c = celsius(f); (dentro da main()).
  Papel: Transfere o fluxo de execução do programa para a função celsius(), enviando o valor do argumento f (passagem por valor) e atribuindo o resultado devolvido à variável c.
- Definição (Implementação):
```c
float celsius(float fahr) {
    return (fahr - 32.0) * 5.0 / 9.0;
}
```
  Papel: Contém o cabeçalho completo da função (incluindo o nome do parâmetro formal fahr) e o bloco de instruções que efetivamente realiza o cálculo e retorna o resultado.

b) Função do protótipo para o compilador e consequências de sua omissão:
Como o compilador C analisa o arquivo-fonte sequencialmente de cima para baixo, o protótipo funciona como um contrato que permite validar, no momento da chamada (que ocorre antes da definição), se:
1. A quantidade de argumentos passados está correta;
2. Os tipos dos argumentos são compatíveis (realizando conversões implícitas seguras, como int para float, quando necessário);
3. O tipo de retorno é compatível com o contexto em que a chamada foi utilizada.

O que aconteceria se o protótipo fosse omitido e a função definida após main():
Ao encontrar celsius(f) sem declaração prévia, o compilador (nos padrões modernos C99/C11/C17/C23) emitiria um erro ou aviso de declaração implícita de função (implicit declaration of function), assumindo por regras legadas que a função retorna int e aplicando promoções padrão nos argumentos sem verificação estrita de tipos. Em seguida, ao alcançar a definição real float celsius(float fahr), ocorreria um erro fatal de conflito de tipos (conflicting types for 'celsius'), pois o retorno float diverge do int assumido implicitamente.

c) Tipo da função celsius() e sua determinação pelo valor retornado:
- Tipo da função: float.
- Justificativa: Na linguagem C, uma chamada de função em uma expressão (como c = celsius(f);) é avaliada e substituída em tempo de execução pelo valor que ela devolve via return. Dessa forma, o compilador precisa saber o tipo do dado produzido pela função para reservar o registrador ou espaço adequado e validar a compatibilidade de tipos na expressão chamadora, independentemente dos tipos dos parâmetros recebidos como entrada.

---

Questão 02

a) Quantidade de valores retornados e o erro na função calcular():
- Uma função em C pode devolver no máximo um único valor diretamente por meio do comando return.
- Intenção do programador: Devolver dois resultados simultaneamente (soma e media).
- Por que falha: Em C, a vírgula na expressão return soma, media; não separa múltiplos valores de retorno, mas atua como o operador vírgula (comma operator). Esse operador avalia a expressão à esquerda (soma), descarta seu resultado, avalia a expressão à direita (media) e retorna apenas o valor desta última (media).

b) Efeito e obrigatoriedade de return; em funções void:
- Efeito: Dentro de imprime_mensagem(), a instrução return; provoca o encerramento imediato (saída antecipada) da função sempre que erro < 0, devolvendo o controle à função chamadora e impedindo a execução do segundo printf.
- Obrigatoriedade: Não é obrigatório no final de uma função void. Como funções void não retornam nenhum valor, ao atingir a chave de fechamento (}) do corpo da função, o fluxo retorna automaticamente para quem a invocou.

c) Reescrita em duas funções separadas e justificativa:
```c
int calcular_media(int a, int b, int c) {
    int soma = a + b + c;
    return soma / 3;
}

int calcular_soma(int a, int b, int c) {
    return a + b + c;
}
```
Justificativa: Como a assinatura de uma função em C especifica apenas um tipo de retorno e a instrução return transporta um único valor escalar por invocação, não é possível devolver dois resultados distintos usando exclusivamente return (sem recorrer a ponteiros ou struct). Por isso, cada cálculo precisa ser isolado em sua própria função.

---

Questão 03

a) Classificação dos protótipos:
1. void exibe_mensagem(char* msg); - Possui parâmetro de entrada (char* msg) e não possui valor de retorno (void).
2. int obter_codigo(void); - Não possui parâmetros de entrada (void na lista de parâmetros) e possui valor de retorno (int).
3. void limpar_tela(void); - Não possui parâmetros de entrada (void) e não possui valor de retorno (void).

b) Diferença prática entre função com retorno e procedimento (void):
- Função com retorno: Computa e entrega um dado resultante ao código chamador para ser armazenado em variável, usado em expressões matemáticas ou avaliado em estruturas condicionais.
  Exemplo: float calcular_imc(float peso, float altura); - o programa precisa do valor numérico do IMC para classificá-lo.
- Procedimento (função void): Executa uma ação ou efeito colateral (exibir texto na tela, limpar buffer, gravar log) sem devolver um dado ao chamador.
  Exemplo: void exibir_cabecalho(void); - apenas imprime um título formatado no terminal.

c) Validade da chamada x = limpar_tela();:
- Inválida. Resultará em erro de compilação (void value not ignored as it ought to be).
- Justificativa: Como o tipo de retorno de limpar_tela() é void (ausência de valor), a função não produz nenhum dado que possa ser lido e atribuído à variável x.

---

Questão 04

a) Caso base, passo recursivo e consequência da remoção do caso base:
- Caso base: (n == 0) ? (long)1 - condição de parada que retorna diretamente 1 sem gerar novas chamadas recursivas.
- Passo recursivo: (long)n * fatorial(n - 1) - reduz o problema original (n) a um subproblema menor (n - 1) e invoca a própria função.
- Remoção do caso base: A função entraria em recursão infinita (fatorial(0) chamaria fatorial(-1), fatorial(-2) e assim por diante), consumindo toda a memória da pilha de execução até provocar um estouro de pilha (Stack Overflow) e o encerramento abrupto do programa.

b) Rastreamento completo de fatorial(4):
Fase de Empilhamento (Descida / Chamadas):
1. fatorial(4) -> 4 != 0, aguarda 4 * fatorial(3)
2. fatorial(3) -> 3 != 0, aguarda 3 * fatorial(2)
3. fatorial(2) -> 2 != 0, aguarda 2 * fatorial(1)
4. fatorial(1) -> 1 != 0, aguarda 1 * fatorial(0)
5. fatorial(0) -> atinge o caso base (0 == 0) e retorna 1

Fase de Desempilhamento (Subida / Retornos):
1. fatorial(0) devolve 1
2. fatorial(1) calcula 1 * 1 e devolve 1
3. fatorial(2) calcula 2 * 1 e devolve 2
4. fatorial(3) calcula 3 * 2 e devolve 6
5. fatorial(4) calcula 4 * 6 e devolve 24 (resultado final)

c) Comportamento da pilha de execução na memória:
A cada chamada recursiva, o programa cria um novo registro de ativação (stack frame) no topo da pilha de execução (call stack) contendo sua própria cópia dos parâmetros (n), variáveis locais e endereço de retorno. Como a memória reservada para a pilha é finita e limitada, uma recursão sem caso base empilha frames indefinidamente sem nunca liberá-los, esgotando o espaço disponível e causando Stack Overflow (falha de segmentação / encerramento forçado pelo sistema operacional).

---

Questão 05

a) Saída de cada printf e papel dos parênteses de proteção:
- Saída de printf("%d\n", SQR(2+3));: 25
- Saída de printf("%d\n", DOBRO(2+3));: 8
- Explicação: O pré-processador realiza substituição textual literal antes da compilação:
  - Em SQR(2+3), os parênteses de proteção em torno de x produzem ((2+3)*(2+3)), que é avaliado como 5 * 5 = 25.
  - Em DOBRO(2+3), a ausência de parênteses em x*2 gera 2+3*2. Pela precedência de operadores em C, a multiplicação é executada antes da soma: 2 + (3 * 2) = 8.

b) Ausência de ponto e vírgula e convenção de maiúsculas:
- Sem ponto e vírgula: Como #define faz substituição textual direta no código, incluir ; ao final inseriria um ponto e vírgula inesperado no meio de expressões (ex.: float a = PI * r; viraria float a = 3.14; * r;), ocasionando erro de sintaxe.
- Identificadores em maiúsculas: Convenção adotada para diferenciar visualmente constantes simbólicas e macros de variáveis ou funções comuns, alertando o programador de que se trata de expansão textual do pré-processador (sujeita a efeitos colaterais).

c) Erro em #define PRN (n) printf("%d", n) e diferença entre macro e função:
- Por que está incorreto: O espaço entre PRN e (n) faz o pré-processador tratar PRN como uma macro sem argumentos, cujo corpo literal é (n) printf("%d", n). Ao chamar PRN(10), a expansão gera (n) printf("%d", n)(10), causando erro de compilação.
- Forma correta: Remover o espaço após o nome da macro:
```c
#define PRN(n) printf("%d", (n))
```
- Diferença entre macro com argumentos e função comum:
  A macro é expandida textualmente antes da compilação (sem custo de chamada na pilha, mas sem checagem de tipos e com risco de avaliar o argumento múltiplas vezes, como em SQR(i++)). Já a função é compilada uma única vez, valida estaticamente os tipos dos parâmetros e avalia cada argumento exatamente uma vez antes da execução do seu corpo.

---

Questão 06

a) Diferença entre #include <stdio.h> e #include "areas.h":
- #include <stdio.h>: Busca o cabeçalho exclusivamente nos diretórios padrão do sistema e do compilador. Usada para bibliotecas padrão da linguagem C ou bibliotecas instaladas globalmente no ambiente.
- #include "areas.h": Busca o cabeçalho primeiro no diretório local atual do projeto (onde está o arquivo .c) e, somente se não encontrar, procura nos diretórios do sistema. Usada para arquivos de cabeçalho criados pelo próprio programador.

b) Efeito de #undef SOMA e erro em #undef SOMA(x,y):
- Efeito: Remove a definição da macro SOMA da tabela do pré-processador a partir daquela linha, desativando sua expansão ou permitindo que seja redefinida sem conflitos.
- Por que #undef SOMA(x,y) está incorreto: A sintaxe da diretiva #undef exige exclusivamente o nome do identificador da macro, sem lista de parâmetros. Informar (x,y) gera erro de sintaxe no pré-processador.

c) Resultado quando DEBUG não está definido e momento da decisão:
- Mensagem impressa: Modo normal
- Momento da decisão: Durante o pré-processamento, antes mesmo da compilação. O pré-processador verifica que DEBUG não está definido, descarta o bloco #ifdef DEBUG e mantém apenas o trecho do #else para ser compilado.
- Ausência no executável final: Todas as diretivas # são comandos exclusivos para o pré-processador transformar o texto do código-fonte. Após essa etapa, nenhuma diretiva nem código descartado permanece no código intermediário enviado ao compilador, não existindo no binário executável final.
