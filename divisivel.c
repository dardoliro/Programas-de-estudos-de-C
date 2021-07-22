#include <stdio.h>

int main()
{
    /* Variáveis */
    int x; /* Número 1 */
    int y; /* Número 2*/

    /* Entrada de valores */
    printf("ESTES DOIS NÚMEROS SÃO DIVISÍVEIS?\n\nDigite um número inteiro: \n");
    scanf("%i", &x); /* Armazena o primeiro número no endereço de memória de X */
    printf("Digite outro número inteiro: \n");
    scanf("%i", &y); /* Armazena o segundo número no endereço de memória de Y */

    if (x % y == 0) {
        printf("%i e %i são divisíveis!\n", x, y);
    } else  if (y % x == 0){
        printf("%i e %i são divisíveis!\n", x, y);
    } else {
        printf("%i e %i não são divisíveis (%i%%%1i = %i)\n", x, y, x, y, x % y);
    }
    return 0;
}
