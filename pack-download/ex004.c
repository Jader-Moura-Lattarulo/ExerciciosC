#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("O %s tem %i anos de idade\n ","Jader", 34);
    printf("Seu peso atual � de %6.2fKg\n", 87.5);
    printf("O seu sexo � %c",'M');
}
