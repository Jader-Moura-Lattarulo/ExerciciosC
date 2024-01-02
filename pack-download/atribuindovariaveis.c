#import <stdio.h>
#import <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    unsigned idade = 33;
    float peso = 85.9;
    char sexo = 'M';
    char *nome = "Juvenal";

    printf("%s é do sexo %c, tem %i anos e pesa %.1fKg",nome, sexo,  idade, peso);
}
