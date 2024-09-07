#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1;
    int valor2;
    int metodo;
    int resultado;
    printf("digite o numero que voce queira: \n");
    scanf("%d", &valor1);
    printf("digite outro numero: \n");
    scanf("%d", &valor2);
    printf("Digite o metodo de calculo: \n");
    printf("qual seria o metodo de calculo: \n");
    printf("1 = soma \n");
    printf("2 = subtracao \n");
    printf("3 = multiplicacao \n");
    printf("4 = divisao \n\n");
    scanf("%d", &metodo);

    switch (metodo) {
        case 1:
            resultado = valor1 + valor2;
            printf("O resultado da soma seria: %d + %d = %d\n",valor1, valor2, resultado);
            break;
        case 2:
            resultado = valor1 - valor2;
            printf("O resultado da subtracao seria: %d - %d = %d\n",valor1, valor2, resultado);
            break;
        case 3:
            resultado = valor1 * valor2;
            printf("O resultado da multiplicacao seria: %d * %d = %d\n",valor1, valor2, resultado);
            break;
        case 4:
            if (valor2 != 0) {
                resultado = valor1 / valor2;
                printf("O resultado da divisao seria: %d / %d = %d\n");
            } else {
                printf("Nao e possivel dividir por zero\n");
            }
            break;
        default:
            printf("metodo invalido\n");
            break;
            
    }


    return 0;
}
