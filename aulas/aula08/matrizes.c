#include <stdio.h>

int main(){

    int tabela[3][3]; // |0|0|0| 

    //    |0|1|2|
    // |0| | | |
    // |1| | | |
    // |2|| | |

    tabela[1][2] = 0;

    //    |0|1|2|
    // |0| | | |
    // |1| | |0|
    // |2|| | |

    printf("Preencha a tabela 3x3: ");
    // percorre as linhas
    for (int i = 0; i < 3; i++){
        // percorre as colunas
        for (int j = 0; j < 3; j++){
            printf("Digite o valor para a posição [%i][%i]: ", i, j);
            scanf("%i", &tabela[i][j]);
        }
    }

    printf("Sua tabela ficou Assim:\n");
    // percorre as linhas
    for (int i = 0; i < 3; i++){
        // percorre as colunas
        for (int j = 0; j < 3; j++){
            printf("%i ", tabela[i][j]);
        }
        printf("\n");
    }
    return 0;
}