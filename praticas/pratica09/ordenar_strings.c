#include <stdio.h>
#include <string.h>
//Declarar e inicializar strings em C;
//Utilizar funções da biblioteca <string.h> para manipulação de textos.
//Ler três strings do usuário e exibir as strings em ordem alfabética;

int main(){

    char string1[100];
    char string2[100];
    char string3[100];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0';
    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0';
    printf("Digite a terceira string: ");
    fgets(string3, sizeof(string3), stdin);
    string3[strcspn(string3, "\n")] = '\0';

    // Ordenar as strings em ordem alfabética
    char *strings[3] = {string1, string2, string3};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                char *temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }

    // Exibir as strings em ordem alfabética
    printf("Strings em ordem alfabética:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;

}