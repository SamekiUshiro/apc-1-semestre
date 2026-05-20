#include <stdio.h>

int main() {
    int valor;
    long long int fatorial = 1; 
    
    do {
        printf("Digite um número inteiro positivo (ou 0): \n");
        scanf("%i", &valor);
        
        if (valor < 0) {
            printf("Erro: O número não pode ser negativo. Tente novamente.\n");
        }
    } while (valor < 0);

    for (int i = 1; i <= valor; i++) {
        fatorial = fatorial * i; 
    }

    printf("O fatorial de %d eh: %llu\n", valor, fatorial);

    return 0;
}