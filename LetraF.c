#include <stdio.h>
int main() {
    //declaracao
    float raio,altura,volume;

    //leitura
    printf("Informe o valor do raio: ");
    scanf("%2f", &raio);
    printf("Informe o valor da altura: ");
    scanf("%2f", &altura);

    //execucao
    volume = 3.14 * raio * altura;

    //saida
    printf("O volume interno da lata e %2f",volume);
  }
