#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf(" \\a\t=\tBeep\n \\n\t=\tNova linha\n \\t\t=\tTabula��o\n \\\\\t=\tBarra\n %%%%\t=\tPorcentagem\n \\\?\t=\tInterroga��o\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}
