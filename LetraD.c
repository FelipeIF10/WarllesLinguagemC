#include <stdio.h>
int main() {
    //declaracao
    float celsios, faireh;

    //leitura
    printf("informe o valor da temperatura em celsius: ");
    scanf("%2f", &celsios);

    //execucao
    faireh = (9*celsios+160)/5;

    //saida
    printf("a temperatura em fahrenheit e %2f ",faireh);
  }
