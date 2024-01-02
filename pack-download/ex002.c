#import <stdio.h>
#import <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX001 - Listagem >>>\n\n");
    printf("Listagem de Alunos\n");
    printf("Nome\t\tNota\n");
    printf("-------------------\n");
    printf("Ana Beatriz\t8.5\nBianca Martins\t9.0\nCláudio Sá\t5.5\nGiovana Silva\t7.5\n");
}
