#include <stdio.h>

int main(){

    int idade = 0;

    printf("Informe a Sua Idade: \n");
    scanf("%i", &idade);

    int eh_maior_que_16anos = idade >= 16;
    int eh_maior_que_18anos = idade >= 18;
    int eh_menor_que_18anos = idade < 18;
    int eh_menor_70anos = idade < 70;
    int eh_menor_que_16anos = !eh_maior_que_16anos;
    

    /*if (eh_maior_que_16anos) {

        printf("Com %i Anos voce pode votar\n", idade);
    }else{
        printf("Com %i Anos voce nao pode Votar\n", idade);
    }

    
    

    if(eh_maior_que_18anos && eh_menor_70anos){

        printf("Com %i Anos voce TEM que votar\n", idade);
    }*/


    if (eh_menor_que_16anos) {
        printf("Com %i Anos voce NAO pode votar\n", idade);
    }else if(eh_menor_que_18anos){
        printf("Com %i Anos voce pode votar\n", idade);
    }else if(eh_menor_70anos){
        printf("Com %i Anos voce TEM que votar\n", idade);
    }else{
        printf("Com %i Anos voce pode votar\n", idade);
    }
    
    return 0;
}