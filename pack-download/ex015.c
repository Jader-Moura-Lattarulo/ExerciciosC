#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX015 = Bons alunos merecem parabéns >>>\n\n");
    float nota1, nota2, media;
    printf("Digite a sua primeira nota: ");
    fflush(stdin);
    scanf("%f", &nota1);
    fflush(stdin);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1+nota2)/2;
    printf("----------------------------------\n");
    if (media >= 7.0) {
        printf("MEUS PARABÉNS! ");
    }
    printf("A sua média final foi %2.1f\n",media);
    printf("----------------------------------\n");
}
