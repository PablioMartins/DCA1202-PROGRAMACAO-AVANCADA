#include <stdio.h>
#include <stdlib.h>

//Funcao que especifica o criterio de ordenamento para "qsort()"
int compara(const void * a, const void * b){
    return (*(int*)a - *(int*)b);
}


int main(){
    int Qtd;
    //Pegunta ao usuario quantos valores ele vai digitar.
    printf("Quantos valores serao digitados?\n");
    scanf("%d", &Qtd);

    //alocaoção da memoria com base na quantidade que o usuario vai digitar
    float *val;
    val = (float*) malloc(Qtd * sizeof (float));

    //Pede para o usuario digitar os numeros float.
    printf("Digite os %d valores float:\n", Qtd);
    for(int i = 0; i<Qtd; i++){
        scanf("%f", &val[i]);
    }

    //limpa a tela
    system("cls");

    //mostra os numeros na ordem digitada.
    printf("Numeros float's digitados:\n");
    for(int i = 0; i<Qtd; i++){
        printf("%.2f ", val[i]);
    }
    printf("\n");

    //chamada da função qsort com os parametros: o ponteiro que sera
    //ordenado, tamanho do vetor, tamanho das variaveis em cada endereco
    //funcao que especifica o criterio de ordenamento.
    qsort(val, Qtd, sizeof (float),compara);

    //mostra numeros ordenados.
    printf("\nNumeros float's em ordem crescente:\n");
    for(int i = 0; i<Qtd; i++){
        printf("%.2f ", val[i]);
    }
    printf("\n\n");
    free(val);

    return 0;
}
