#include <stdlib.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"portuguese");
    int numero;
    float inverso;
    printf("<<< EX021 - Inverso ou oposto >>>\n\n");
    printf("Digite um n�mero: ");
    scanf("%i",&numero);
    if (numero > 0) {
        inverso = 1/(float) numero;
        printf("O inverso de %i � igual a %f.2\n", numero, inverso);
    } else if (numero == 0) {
        printf("O n�mero 0 n�o contempla nenhuma das opera��es do sistema.");
    } else {
        printf("O oposto de %i � igual a %i\n",numero, numero*-1);
    }
}
