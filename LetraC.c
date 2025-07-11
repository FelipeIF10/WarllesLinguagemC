#include <stdio.h>

int main(){
    //declaracao
    int valor1, valor2;
    int adicao, subtracao, divisao, multiplicacao, resto;

    //leitura
    printf("informe o primeiro valor: ");
    scanf("%d", &valor1);

    printf("informe o segundo valor: ");
    scanf("%d", &valor2);


    //execucao
    adicao = valor1 + valor2;
    subtracao = valor1 - valor2;
    multiplicacao = valor1 * valor2;
    divisao = valor1 / valor2;
    resto = valor1 % valor2;


  //saida
    printf("adição: %d\n", adicao);
    printf("subtração: %d\n", subtracao);
    printf("multiplicação: %d\n", multiplicacao);
    printf("divisão: %d\n", divisao);
    printf("resto da divisão: %d\n", resto);
    
    return 0;
}
