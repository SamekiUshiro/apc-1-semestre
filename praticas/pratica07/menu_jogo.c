#include <stdio.h>

int main(){

    int opcao = 0;
    int check;

    do{
        printf("Menu de Jogo\n");
        printf("1 - Iniciar novo jogo\n");
        printf("2 - Carregar Jogo \n");
        printf("3 - Ver pontuação\n");
        printf("4 - Sair \n");
        
        printf("Escolha uma opcao =>");
        check = scanf("%i", &opcao);
        while(getchar() != '\n');
        

        if (check != 1) {
            printf("\nErro: Entrada invalida. Digite apenas numeros.\n");
            while(getchar() != '\n');
        }

        switch (opcao) {
            case 1:
                printf("\n-> Iniciando um novo jogo! Preparando a fase...\n\n");
                break;
            case 2:
                printf("\n-> Carregando seu jogo salvo...\n\n");
                break;
            case 3:
                printf("\n-> Sua pontuacao atual: 5400 pontos.\n\n");
                break;
            case 4:
                printf("\n-> Saindo do jogo. Ate logo!\n\n");
                break;
            default:
                printf("\n-> Opcao invalida. Por favor, escolha um numero entre 1 e 4.\n\n");
        }
    }while(opcao != 4);

    
    return 0;
}