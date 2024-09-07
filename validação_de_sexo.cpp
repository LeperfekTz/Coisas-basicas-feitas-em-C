#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char sexo;
    int valido = 0;

    while (!valido) {

        printf("Digite o seu sexo: (F ou M)\n");
        scanf(" %c", &sexo);
        sexo = tolower((unsigned char)sexo);
        // tolower diminui o caracter de capslock para normal facilitanto a logica

        if (sexo == 'f')
        {
            printf("Sexo feminino\n");
            valido = 1;
        }
        else if (sexo == 'm')
        {
            printf("Sexo masculino\n");
            valido = 1;
            // validar sempre oque vai ser positivo, para que o negativo seja o erro e assim faça o loop
        }
        else
        {
            printf("Sexo invalido. insira corretamente como pedido (F ou M)\n");
        }
    }
    return 0;
}