#include <stdio.h>
int main() {
    //declaracao
    float celsius, fahren;

    //leitura
    printf("informe a temperatura em fahrenheit: ");
    scanf("%2f", &fahren);

    //execucao
    celsius = ((fahren - 32)*5)/9;

    //saida
    printf("A temperatura em celsius e %2f", celsius);
  }
