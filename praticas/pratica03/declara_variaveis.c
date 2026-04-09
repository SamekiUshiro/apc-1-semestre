#include <stdio.h>

int main(){

    char sexo;
    float altura;
    float peso ;

    printf("Qual o seu Sexo (Aperte M para Masculino ou F para Feminino): ");
    scanf("%c", &sexo);
    printf("Qual a sua Altura:");
    scanf("%f", &altura);
    printf("O Quanto voce pesa:");
    scanf("%f", &peso);

    printf("--------------------------------------\n");
    printf("Entao seu Sexo é: %c\n", sexo);
    printf("Voce possui %1.2f de Altura\n", altura);
    printf("E voce pesa %3.2f Kilos\n", peso);

    return 0;
}