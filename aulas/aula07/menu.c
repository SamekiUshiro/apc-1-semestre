#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcao = 0;

    do{
        system("clear");
        printf("Menu principal\n");
        printf("1 - Consultar Saldo\n");
        printf("2 - Fazer uma Recarga \n");
        printf("3 - Ver mensagens recebidas\n");
        printf("4 - Ver ultimas Chamadas \n");
        printf("5 sair\n");
        
        printf("Escolha uma opcao =>\n");
        scanf("%i", &opcao);
        while(getchar() != '\n');

        switch(opcao)
        {
            case 1: printf("Seu saldo eh de R$ 200,00\n"); break;
            case 2: printf("Escolha entre 10, 20 ou 50 \n"); break;
            case 3: printf("Voce nao tem Mensagens\n"); break;
            case 4: printf("99999 - 88888\n"); break;
            case 5: printf("Agradecemos pelo contado. Ate logo\n"); break;
            default: printf("Opcao invalida! Tente de novo\n");
            

        }
    }while(opcao != 5);

    
    return 0;
}