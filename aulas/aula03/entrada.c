#include <stdio.h>

int main(){

    char tecla_pressionada;

    printf("Pressione uma Tecla: ");
    scanf("%c", &tecla_pressionada);
    printf("Voce pressionou a Tecla '%c' \n", tecla_pressionada);

    while(getchar()  != '\n');

    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("Você tem %i Anos\n", idade);

    float preco;

    printf("Informe o Preco da gasolina:");
    scanf("%f", &preco);
    while(getchar()  != '\n');
    printf("O preco da gasolina eh R$ %.2f\n", preco);
    return 0;
}