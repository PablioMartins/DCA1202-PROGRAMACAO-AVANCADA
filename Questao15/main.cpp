#include <stdio.h>
#include <stdlib.h>

//Funcao que especifica o criterio de ordenamento semelhante ao do "qsort()"
float compara(float *a, float *b){
    return *a - *b;
}

//Funcao de ordenamento
void ordena(float *p, int n, float compara(float *a, float *b)){
    float aux;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(compara(p+i, p+j) > 0){
                aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }
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

    ordena(val, Qtd, compara);


    //mostra numeros ordenados.
    printf("\nNumeros float's em ordem crescente:\n");
    for(int i = 0; i<Qtd; i++){
        printf("%.2f ", val[i]);
    }
    printf("\n\n");
    free(val);

    return 0;
}
