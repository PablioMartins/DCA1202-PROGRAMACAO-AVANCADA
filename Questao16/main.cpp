#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compara(const void * a, const void * b){
    return (*(int*)a - *(int*)b);
}

float compara2(float *a, float *b){
    return *a - *b;
}

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
    float *val, *val2;
    val = (float*) malloc(Qtd * sizeof (float));
    val2 = (float*) malloc(Qtd * sizeof (float));

    for(int i = 0; i<Qtd; i++){
        val[i] = rand()%100;
        val2[i] = val[i];
    }

    //limpa a tela
    system("cls");

    //chamada de ordena.
    float t_compA, t_compD;
    t_compA = clock();
    ordena(val, Qtd, compara2);
    t_compD = clock() - t_compA;

    //Chamada de qsort
    float t_qsortA, t_qsortD;
    t_qsortA = clock();
    qsort(val2, Qtd, sizeof (float),compara);
    t_qsortD = clock() - t_qsortA;

    //Mostra o tempo para cada função.
    printf("Tempo para ordena: %.4f\n", t_compD);
    printf("Tempo para qsort: %.4f", t_qsortD);

    printf("\n\n");
    free(val);
    free(val2);

    return 0;
}
