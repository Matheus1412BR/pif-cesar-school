a) Saída:
Prata
Ouro
Sem Medalha

O switch encontra o ponto de entrada no case 2:, pois codigo == 2. Como não existe a instrução break no final do case 2: nem do case 3:, o fluxo de execução continua caindo nos casos subsequentes sequencialmente até encontrar um break ou o fim do bloco switch.
b) Papel do break: Interromper a execução do bloco switch imediatamente, saltando o controle do programa para a primeira linha após a estrutura.
Efeito Fall-Through: É o nome dado ao comportamento no qual a execução passa diretamente para o código dos rótulos case subsequentes por omissão intencional ou acidental do comando break.
c)
Permitidos: Somente tipos de dados inteiros ou enumerados (ex: int, char, short, long, unsigned int, enum).
Não permitidos (float ou double): Não é permitido usar tipos de ponto flutuante.
Isso ocorre pois, os rotuladores case exigem comparações exatas por valores discretos/constantes. Por razões de representação binária e imprecisão inerente ao padrão IEEE 754 de números reais, testes de igualdade exata com float ou double são propensos a falhas de precisão.
