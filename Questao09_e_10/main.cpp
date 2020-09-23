//Questao 09 --->
//-> Se x for um char:
//x+1 = 4093, x+2 = 4094, x+3 = 4095
//-> Se x for um int:
//x+1 = 4094, x+2 = 4098, x+3 = 4102
//-> Se x for um float:
//x+1 = 4096, x+2 = 4100, x+3 = 4104
//-> Se x for um double:
//x+1 = 4100, x+2 = 4108, x+3 = 4116

//Questao 10 --->
#include <stdio.h>

int main(void){
    int VETOR_INT[] = {1, 2, 3, 4};
    char VETOR_CHAR[] = {1, 2, 3, 4};
    float VETOR_FLOAT[] = {1.0, 2.0, 3.0, 4.0};
    double VETOR_DOUBLE[] = {1.0, 2.0, 3.0, 4.0};
    int i;

    //Na minha maquina o valor dos bits do int e 4 bits. logo para "int"
    //nao se confirmou a suposicao.
    printf("Vetor int:\n");
    for(i = 0; i < 4; i++){
        printf("%d ", &VETOR_INT[i]);
    }

    //Confirmou a suposicao andou de 1 em 1 byte
    printf("\n\nVetor Char:\n");
    for(i = 0; i < 4; i++){
        printf("%d ", &VETOR_CHAR[i]);
    }

    //confirmou a suposicao andou de 4 em 4 bytes
    printf("\n\nVetor float:\n");
    for(i = 0; i < 4; i++){
        printf("%d ", &VETOR_FLOAT[i]);
    }

    //confimou a suposicao andou de 8 em 8 bytes
    printf("\n\nVetor double:\n");
    for(i = 0; i < 4; i++){
        printf("%d ", &VETOR_DOUBLE[i]);
    }
    printf("\n\n");
    return 0;
}
