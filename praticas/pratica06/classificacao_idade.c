#include <stdio.h>

int main(){
    // Ler a idade de uma pessoa e classificar como: criança (0-12 anos), adolescente (13-17 anos), adulto (18-64 anos) e idoso (65+ anos);

    int idade = 0;

    printf("Por favor Digite sua Idade:\n");
    scanf("%i", &idade);

    if(idade < 12){
        printf("Voce com %i anos eh uma Crianca\n", idade);
    }else if(idade < 17){
        printf("Voce com %i anos eh um Adolecente\n", idade);
    }else if(idade <64){
        printf("Voce com %i anos eh um Adulto\n", idade);
    }else{
        printf("Voce com %i anos eh um Idoso, Vai pro museo velharia\n", idade);
    }



    return 0;
}