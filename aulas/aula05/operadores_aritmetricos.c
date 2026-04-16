#include <stdio.h>
#include <math.h>

int main(){

    //1. entrada
    int operador1;
    int operador2;

    printf("Entre Com um valor inteiro: \n");
    scanf("%i", &operador1);
    while(getchar() != '\n');

    printf("Entre Com outro valor inteiro: \n");
    scanf("%i", &operador2);
    while(getchar() != '\n');
    
    // 2. Processamento
    int soma = operador1 + operador2;
    int multiplicacao = operador1 * operador2;
    int subtracao = operador1 - operador2;
    float divisao = operador1 * 1.0f / operador2;
    int resto = operador1 % operador2; // modulo = resto da divisao

    //3. Saida
    printf("%i + %i = %i\n", operador1, operador2, soma);
    printf("%i - %i = %i\n", operador1, operador2, subtracao);
    printf("%i * %i = %i\n", operador1, operador2, multiplicacao);
    printf("%i / %i = %f\n", operador1, operador2, divisao);
    printf("%i %% %i = %i\n", operador1, operador2, resto); // colocar dois '%%' é o que permite que o % seja imprimido
    // precedencia das operacoes
    // 5 + 4 * 1 - 3 / 2
    // 5 + 4 -1
    //8
    // a ordem sempre começa da esquerda para a direita

    int expressao = 5 + 4 * 1 - 3 / 2;
    

    //funcoes das matematica

    double potencia = pow (operador1, operador2);
    double raiz_quadrada = sqrt(operador1);
    double logaritmo = log(operador1);
    double coseno = cos(operador1* 3.14 / 180); // angulo em radiano => valor *pi / 180

    //saida

    printf("%i ^ %i = %i\n", operador1, operador2, potencia);
    printf("²/%i = %i\n", operador1, raiz_quadrada);
    printf("log(%i) = %i\n", operador1, logaritmo);
    printf("cos(%i) = %i\n", operador1, coseno);
    printf("5 + 4 * 1 - 3 / 2 = %i\n", expressao);
    
    return 0;
}