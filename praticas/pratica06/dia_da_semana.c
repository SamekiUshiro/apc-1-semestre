#include <stdio.h>

int main(){

    //Ler um número correspondente ao dia da semana (1 a 7) e informar se é: dia útil ou final de semana;

    int dia_da_semana = 0;

    printf("Digite o Dia da Semana de 1 a 7: \n");
    scanf("%i", &dia_da_semana);

    switch(dia_da_semana){
        case 1:printf("Eh Segunda Feira, eh Dia Util\n"); break;
        case 2:printf("Eh Terca Feira, eh Dia Util\n"); break;
        case 3:printf("Eh Quarta Feira, eh Dia Util\n"); break;
        case 4:printf("Eh Quinta Feira, eh Dia Util\n"); break;
        case 5:printf("Eh Sexta Feira, eh Dia Util\n"); break;
        case 6:printf("Eh Sabado, Final de Semana\n"); break;
        case 7:printf("Eh Domingo, Final de Semana\n"); break;
        default:printf("Valor Incorreto, Tente novamente\n"); 
    }

    return 0;
}