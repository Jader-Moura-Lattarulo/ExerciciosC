#import <stdio.h>
#import <locale.h>
void main () {
    setlocale(LC_ALL, "Portuguese");
    /*int n;
    float m;
    printf("Digite um número inteiro: ");
    scanf("%i", &n);
    printf("Digite um número real: ");
    scanf("%f", &m);
    printf("Você acabou de digitar os valores %i e %.2f. Obrigado!", n, m);*/
    char r;
    char s;
    printf("Digite só uma letra: ");
    fflush(stdin);
    scanf("%c", &r);
    printf("Digite outra letra: ");
    fflush(stdin);
    scanf("%c", &s);
    printf("Você digitou as letras \"%c\" e \"%c\"", r, s);
}
