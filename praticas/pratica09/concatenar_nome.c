#include <stdio.h>
#include <string.h>

// Ler o primeiro nome e o último nome de uma pessoa. Concatenar os dois em uma única string e exibi-la na tela;

int main(){
    char primeiro_nome[50];
    char ultimo_nome[50];
    char nome_completo[100];

    printf("Digite o primeiro nome: ");
    fgets(primeiro_nome, sizeof(primeiro_nome), stdin);
    primeiro_nome[strcspn(primeiro_nome, "\n")] = '\0';

    printf("Digite o ultimo nome: ");
    fgets(ultimo_nome, sizeof(ultimo_nome), stdin);
    ultimo_nome[strcspn(ultimo_nome, "\n")] = '\0';

    // Concatenar os nomes
    strcpy(nome_completo, primeiro_nome); // Copia o primeiro nome para nome_completo
    strcat(nome_completo, " "); // Adiciona um espaço entre os nomes
    strcat(nome_completo, ultimo_nome); // Adiciona o último nome

    printf("Nome completo: %s\n", nome_completo);

    return 0;
}