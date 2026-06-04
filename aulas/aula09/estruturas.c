#include <stdio.h>

int main(){

    //base
    struct contato_t {
        char nome[61];
        long long int telefone;
    };

    // criar o tipo ponto_cartesiano
    struct ponto_cartesiano_t {
        int x;
        int y;
    };

    // criar o tipo aluno
    struct aluno_t {
        int matricula;
        char nome[61];
        char email[101];
        char nascimento[11];
    };

    //criar uma varriavel do tipo contato

    struct contato_t contato;
    printf("Digite o nome do contato: ");
    scanf("%[^\n]s", contato.nome);
    while(getchar() != '\n'); //limpa o buffer do teclado
    printf("Digite o telefone do contato: ");
    scanf("%lli", &contato.telefone);
    while(getchar() != '\n');
    

    printf("Seu contato: %s - %lli\n", contato.nome, contato.telefone);
    printf("------------------------------\n");
    //cria um vetor do tipo contato
    struct contato_t contatos[10];
    int quantidade = 0;

    //incluir um contato
    printf("Digite o nome do contato: ");
    scanf("%[^\n]s", contatos[quantidade].nome);
    while(getchar() != '\n');
    printf("Digite o telefone do contato: ");
    scanf("%lli", &contatos[quantidade].telefone);
    while(getchar() != '\n');
    quantidade++;

    //listar os contatos
    for(int i = 0; i < quantidade; i++) {
        printf(" Contato %i : %s - %lli\n", i-1, contatos[i].nome, contatos[i].telefone);
    }

    //procurar um contato
    int procurado = 0;
    int achei = -1;
    printf("Digite o numero do contato a ser procurado: ");
    scanf("%i", &procurado);
    while(getchar() != '\n');
    for(int i = 0; i < quantidade; i++) {
        if(procurado == i) {
            achei = i;
            break;
        }
    }

    if(achei <0) {
        printf("Contato nao encontrado\n");
    } else {
        printf("Contato encontrado %i : %s - %lli\n", procurado, contatos[procurado].nome, contatos[procurado].telefone);
    }

    // alterar um contato
     procurado = 0;
     achei = -1;
    printf("Digite o numero do contato a ser alterado: ");
    scanf("%i", &procurado);
    while(getchar() != '\n');
    for(int i = 0; i < quantidade; i++) {
        if(procurado == i) {
            achei = i;
            break;
        }
    }

    if(achei <0) {
        printf("Contato nao encontrado\n");
    } else {
        printf("entre com o novo nome do contato: ");
        scanf("%[^\n]s", contatos[procurado].nome);
        while(getchar() != '\n');
        printf("entre com o novo telefone do contato: ");
        scanf("%lli", &contatos[procurado].telefone);
        while(getchar() != '\n');
        printf("Contato alterado %i : %s - %lli\n", procurado, contatos[procurado].nome, contatos[procurado].telefone);
    }

    // excluir um contato
        procurado = 0;
        achei = -1;
    printf("Digite o numero do contato a ser excluido: ");
    scanf("%i", &procurado);
    while(getchar() != '\n');
    for(int i = 0; i < quantidade; i++) {
        if(procurado == i) {
            achei = i;
            break;
        }
    }

    if(achei <0) {
        printf("Contato nao encontrado\n");
    } else {
        contatos[procurado] = contatos[quantidade-1]; //sobrescreve o contato a ser excluido com o ultimo contato da lista
        quantidade--;
        printf("Contato excluido\n");

     return 0;
}