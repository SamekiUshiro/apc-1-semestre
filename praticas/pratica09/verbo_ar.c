#include <stdio.h>
#include <string.h>

//Ler um verbo digitado pelo usuário e verificar se ele termina com "ar";

int main(){

    char verbo[100];

    printf("Digite um verbo: ");
    scanf("%[^\n]s", verbo);

    int tamanho = strlen(verbo);
    if (tamanho >= 2 && strcmp(&verbo[tamanho - 2], "ar") == 0){

        printf("O verbo Termina com ar\n");
    } else {
        printf("O verbo NAUM termina com ar\n");

    }

    return 0;
}