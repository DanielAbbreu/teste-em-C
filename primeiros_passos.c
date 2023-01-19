/*   MEMORIA

    int dias;
    float anos;
    printf("Entre com o numero de dias: ");
    scanf("%d", &dias);
    anos = dias/362.25;
    printf("\n%d dias equivalem a %.2f anos.\n", dias, anos);

    char letra = 'f';
    printf(" a letra eh %c\n", letra);
    //obs: se usar %d ele imprime o numero referente a tabela ASCII

    char key;
    key = getch(); // deste modo o sistema le e tecla e nao precisa apertar ENTER
    printf("voce pressionou a tecla %c\n", key);

    //STRINGS: vetor de caracteres, para ler usar a funcao gets()
    char string[10] = "Joao";

    char string[100];
    printf("Digite uma string: ");
    gets(string);
    printf("voce digitou: %s\n", string);

    //imprime o alfabeto
    char letra;
    for(letra = 'A'; letra <= 'Z'; letra++){
        printf("%c ",letra);
    }

    PRINTF()
        printf(string_de_controle, lista_de_argumentos)


    SCANF()
    scaf(string-de-controle, lista-de-argumentos);
    -usar & antes das variaveis da lista de argumentos

    modificadores em C
    signed, unsigned, long, short
    float nao aceita, double so aceita long
    declarar só usando long é long int

    CONSTANTES HEXADECIMAIS
    hexa-comecam com 0x
    ocatias comecam com 0
    exemplo:
    0xEF     const. hexadecimal (8bits)
    0x12A4   const. hexadecimal (16bits)

    COSTANTES STRINGS
    ´t´ é um char
    "t" é uma constante string com 2 chars: 't' e '\0'

    OPERADORES
    / -> divisao(inteira(pra ints) e ponto flutuante(pra floats e double))
    = -> atribuicao x=y=z= 14;
    ++x -> incrementa e retorna o valor ja incrementado
    x++ -> retorna o valor sem incremento e depois incrementa

    OPERADORES LOGICOS
    | OR
    & AND
    ^ XOR
    ~ NOT
    >> DESLOCAMENTO DE BITS A DIREITA
    << DESLOCAMENTO DE BITS A ESQUERDA
    int i = 2;  //2
    i = i << 3; //16

    ENCADEANDO EXPRESSOES: OPERADOR ,
    virgula diz para executar as operacoes em sequencias
    exemplo: x = (y=2, y+3)
    int x, y;
    for(x=0, y=0; x+y<100; ++x, y++ ){
        printf("%d ", x+y);
    }

    CAST
    int num;
    float f;
    num = 10;
    f = (float)num/7;
    printf("%f",f);

    IF ELSE
    if, else, else if

    OPERADOR ?
    condicao?expressao1:epressao2

    SWITCH
    switch(num){
        case 9:
            printf("numero é 9");
            break;
        case 10:
            printf("numero é 9");
            break;
        default:
            printf("numero nao eh 9 nem 10");
            break;
    }

    FOR
    -loop infinito:
    for(inicilizacao;;incremento)declaração;
        int count;
        char ch;
        for(count = 1; ;count++){
            ch = getch();
            if(ch == 'x')break;
            printf("\nLetra %c",ch);
        }
    -loop sem conteudo: gerar tempo de espera
    for(inicilizacao;inicializaca;incremento); <- ponto e virgula aqui
        long int i;
        printf("\a"); //imprime caractere de alerta(um beep)
        for(i=0;i<200000000;i++);//espera 10.000.000 iteracoes
        printf("\a");

    WHILE
        while(condicao)declaracao;

    DO WHILE
        do{
            declaracao;
        }while(condicao);

    BREAK E CONTINUE
        continue: soh funciona dentro de loop,quando encontrado pula pra proxima iteracao
        int num;
    while(num != 3){
        printf("\nEscolha um numero entre 1 e 3: ");
        scanf("%d", &num);
        if ((num<1)||(num>3)){
            printf("\nintervalo invalido");
            continue;
        }
        switch(num){
        case 1:
            printf("\ndigitado opção 1");
            break;
        case 2:
            printf("\ndigitado opção 2");
            break;
        case 3:
            printf("\nsaindo...\n");
            break;
        }

    }

    GOTO
        -recomendado nao usar. Use para sair de uma vez de varios if aninhados
        -comando de salto incondicional posicao do salto seguido de :
        inicializacao;
        inicio-do-loop:
            if(condicao){
                declaracao;
                incremento;
                goto inicio-do-loop;
            }
*/
#include <stdio.h>
#include <conio.h>

int main(){


    //modificacao feita:
    int num = 10;


    return 0;
}


