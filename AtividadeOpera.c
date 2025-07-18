#include <stdio.h>

int main() {
    int num1, num2;
    int soma, produto, diferenca, quociente, resto;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    produto = num1 * num2;
    diferenca = num1 - num2;
    quociente = num1 / num2; 
    resto = num1 % num2;

    printf("Soma = %d\n", soma);
    printf("Produto = %d\n", produto);
    printf("Diferença = %d\n", diferenca);
    printf("Quociente = %d\n", quociente);
    printf("Resto = %d\n", resto);

    return 0;
}
