#include <stdio.h>

int main(){

    unsigned char carater_sem_sinal;
    unsigned int inteiro_sem_sinal;

    short int inteiro_curto;
    long long int Inteiro_longo = 10LL; //O 'LL' no final para que o programa consiga entender que é Longo Longo//
    
    long double duplo_longo = 1.123456789012345678L;

    //imprimindo Sizeof()//
    printf("Tamanho de Char é : %ui bytes\n", sizeof(char));
    printf("Tamanho de Short int é : %ui bytes\n", sizeof(short int));
    printf("Tamanho de Int é : %ui bytes\n", sizeof(int));
    printf("Tamanho de Long Int é : %ui bytes\n", sizeof(long int));
    printf("Tamanho de Long Long Int é : %ui bytes\n", sizeof(long long int));
    printf("Tamanho de float é : %ui bytes\n", sizeof(float));
    printf("Tamanho de Double é : %ui bytes\n", sizeof(double));
    printf("Tamanho de Long Double é : %ui bytes\n", sizeof(long double));

    return 0;
}