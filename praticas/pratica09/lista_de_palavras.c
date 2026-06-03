#include <stdio.h>
#include <string.h>

//Ler N palavras e armazená-las em um vetor de strings. Em seguida, imprimir todas as palavras lidas.

int main(){

    int N;
    printf("Digite o numero de palavras: ");
    scanf("%d", &N);
    char palavras[N][100]; // Vetor de strings

    // Ler as palavras
    for (int i = 0; i < N; i++) {
        printf("Digite a palavra %d: ", i + 1);
        scanf("%s", palavras[i]);
    }

    // Imprimir as palavras
    printf("Palavras digitadas:\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", palavras[i]);
    }

    return 0;
}