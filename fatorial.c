#include <stdio.h>

int main() {

    int x; /* Valor inserido pelo usuário */
    long long int fatorial = 1; /* Resultado do fatorial */
    
    printf("CALCULADORA DE FATORIAL\n\nDigite o valor de X: "); /* Inicia o programa */
    scanf("%i", &x); /* Armazena o valor inserido pelo usuário no endereço de memória de X */

    /* Laço FOR que armazena 
    o produto de FATORIAL * X
    na variável FATORIAL,
    diminuindo X em 1,
    a cada repetição */

    for (x; x >=1; x--)
    {
        fatorial = fatorial * x;
    }

    /* Imprime o valor do fatorial na tela */
    printf("%lli\n",fatorial);
}
