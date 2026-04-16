#include <stdio.h>

int main(){

    int idade;

    printf("Entre com sua idade: \n");
    scanf("%i", &idade);
    while(getchar() != '\n');

    // operadores relacionais
    /*
    < Menor que
    <= Menor ou igual
    > Maior que
    >= Maior ou igual
    == igualidade
    != diferenca 
    */
    int eh_menor_idade = idade < 18; 
    int eh_idoso= idade >= 60;
    int eh_debutante = idade == 15;
    int nao_eh_debutante = idade != 15;

    printf("Voce eh menor de Idade? %i\n", eh_menor_idade);
    printf("Voce eh idoso? %i\n", eh_idoso);
    printf("Voce eh debutante? %i\n", eh_debutante);
    printf("Voce nao eh debutante? %i\n", nao_eh_debutante);

    return 0;
}