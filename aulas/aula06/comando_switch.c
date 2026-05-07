#include <stdio.h>

int main(){

    int nota = 0;

    printf("Informe uma nota de 1 a 5 : \n ");
    scanf("%i", &nota);

    // if (nota == 1){
    //     printf("Voce ganhou uma estrela *\n");
    // }else if(nota == 2){
    //     printf("Voce ganhou duas estrela **\n");
    // }else if(nota == 3){
    //     printf("Voce ganhou tres estrela ***\n");
    // }else if(nota == 4){
    //     printf("Voce ganhou quatro estrela ****\n");
    // }else if(nota == 5){
    //     printf("Voce ganhou cinco estrela *****\n");
    // }else{
    //     printf("Nota Invalida! Tente Denovo.\n");
    // }
    
    switch(nota){
        case 1: printf("Voce ganhou uma estrela *\n"); break;
        case 2: printf("Voce ganhou duas estrela **\n"); break;
        case 3: printf("Voce ganhou tres estrela ***\n"); break;
        case 4: printf("Voce ganhou quatro estrela ****\n"); break;
        case 5: printf("Voce ganhou cinco estrela *****\n"); break;
        default: printf("Nota Invalida! Tente Denovo.\n");
    }

    return 0;
}