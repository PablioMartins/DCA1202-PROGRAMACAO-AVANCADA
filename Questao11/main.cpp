#include <stdio.h>

int main(void){
    float aloha[10], coisas[10][15], *pf, value = 2.2;
    int i = 3;

    aloha[2] = value;//valido
    scanf("%f", aloha);//valido
    //aloha = value"; invalido
    printf("%f", aloha);//invalido nao ira imprimir o valor do endereco de aloha
    coisas[4][4] = aloha[3];//valido - porem "aloha[3]" nao foi atribuido valores "coisas[4][4] ira guardar lixo.
    //coisas[5] = aloha; invalido
    //pf = value; invalido
    pf = aloha;//valido

    return 0;
}
