#include <stdio.h>

int main(){

    //Exibir um menu de jogo com as opções: 1 - Novo jogo, 2 - Continuar jogo, 3 - Ver pontuação
    // 4 - Sair. Ler a opção escolhida e exibir a mensagem correspondente. Caso a opção seja inválida, informar o usuário.

    int menu = 0;

    printf("Selecione uma Opção para Iniciar o jogo:\n");
    printf("1 - Novo Jogo\n");
    printf("2 - Continuar Jogo\n");
    printf("3 - Ver Pontuacao\n");
    printf("4 - Sair\n");

    printf("Sua opcao:  ");
    scanf("%i", &menu);

    switch(menu){

        case 1:printf("Abrindo Sistema de criacao de Personagem\n"); break;
        case 2:printf("Carregando Ultimo Dado Salvo\n"); break;
        case 3:printf("Sua Ultima pontuacao foi 666\n"); break;
        case 4:printf("See You Next Time\n"); break;
        default:printf("Esta tendando desbloquear algum segredo ? Desculpa isso ainda nao foi implementado ou voce DIGITOU o valor errado, Tente Novamente xp\n");
    }


    return 0;
}