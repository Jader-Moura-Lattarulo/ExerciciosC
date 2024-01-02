#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX010 - Preço do Produto\n\n");
    char prod[20];
    float preco, desc, preconovo;
    printf("Produto: ");
    gets(prod);
    printf("Preço do %s: R$",prod);
    scanf("%f",&preco);
    printf("Desconto: (%%) ");
    scanf("%f",&desc);
    preconovo = preco-(preco*desc/100);
    printf("O produto %s custava R$%6.2f, mas com %6.2f%% de desconto, passa a custar R$%6.2f.",prod,preco,desc,preconovo);
}
