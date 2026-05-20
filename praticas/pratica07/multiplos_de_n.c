#include <stdio.h>

int main(){

    int valor = 0;
    int check;
    do{
    printf("Digite um valor para ser multiplicado ate 100: \n");
    check = scanf("%i", &valor);
    if (check != 1) {
            printf("Erro: Valor incorreto. Tente novamente.\n");
            while(getchar() != '\n');
            valor = -1;
        }
    }while(valor < 0);

    for(int i = 1; i <= 100; i++)
    {
        printf("%i x %i = %i\n", valor, i, valor * i);
    }

    return 0;
}