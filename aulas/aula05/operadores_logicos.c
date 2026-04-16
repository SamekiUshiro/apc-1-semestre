#include <stdio.h>

int main(){

    int idade;

    printf("Entre com sua idade: \n");
    scanf("%i", &idade);
    while(getchar() != '\n');

    /*
    Operadores Logicos
    1 - Verdadeiro
    0 - Falso
    E - && - Falso E qualquer coisa = Falso
    Ou - || - Verdadeiro OU qualquer coisa = Verdadeiro
    Nao - ! - NAO Verdade = Falso, NAO Falso = Verdadeiro
    
    */

    int eh_obrigado_votar = idade >= 18 && idade <= 70;
    int eh_facultativo_votar = idade >= 16 && idade < 18 || idade > 70;

    printf("Voce tem %i anos e deve votar? %i \n", idade, eh_obrigado_votar);
    printf("Voce tem %i anos e pode votar ? %i \n", idade, eh_facultativo_votar);

    return 0;
}