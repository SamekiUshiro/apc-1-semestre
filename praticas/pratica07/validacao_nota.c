#include <stdio.h>

int main(){

    float nota = 1;
    int check;

    do{
    printf("Digite uma nota de 0 a 10: \n");
    check = scanf("%f", &nota);
    if (check != 1) {
            printf("Valor de Nota incorreto. Tente novamente.\n");
            while(getchar() != '\n');
            nota = -1.0;
        }else if(nota < 0 || nota > 10){
            printf("A nota deve estar exatamente entre 0 e 10. Tente novamente.\n");
        }
    }while(nota < 0 || nota > 10);

    printf("A nota que voce resolveu dar é: %.1f \n", nota);


    return 0;
}