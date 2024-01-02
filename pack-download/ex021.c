#include <stdlib.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"portuguese");
    int numero;
    float inverso;
    printf("<<< EX021 - Inverso ou oposto >>>\n\n");
    printf("Digite um número: ");
    scanf("%i",&numero);
    if (numero > 0) {
        inverso = 1/(float) numero;
        printf("O inverso de %i é igual a %f.2\n", numero, inverso);
    } else if (numero == 0) {
        printf("O número 0 não contempla nenhuma das operações do sistema.");
    } else {
        printf("O oposto de %i é igual a %i\n",numero, numero*-1);
    }
}
