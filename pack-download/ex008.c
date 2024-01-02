#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX008 - Alfabeto >>>\n\n");
    char l;
    printf("Digite uma letra: ");
    l = getchar();
    char ant = l - 1;
    char pos = l + 1;
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.\n",l,ant,pos);
}
