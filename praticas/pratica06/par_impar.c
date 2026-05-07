#include <stdio.h>

int main(){

    int valor = 0;
    
    printf("Digite um valor para ver se eh par ou impar: \n");
    scanf("%i", &valor);
   
    int eh_par = valor % 2;

    if( eh_par == 0){
        printf("O Valor %i é Par\n", valor);
    }else{
        printf("O Valor %i é Impar\n", valor);
    }


    return 0;
}