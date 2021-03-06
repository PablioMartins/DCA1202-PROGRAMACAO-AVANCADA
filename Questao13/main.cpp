#include <stdio.h>
#include <stdlib.h>

//Funcao que ondena os numeros do menor para o maior (crescente)
void ordena(float *p, int n){
    int i, j;
    float aux;
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(p[i] > p[j]){
                aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }
}

int main(){
    int Qtd;
    printf("Quantos valores ira digitar?\n");
    scanf("%d", &Qtd);

    //alocaoção da memoria
    float *val;
    val = (float*) malloc(Qtd * sizeof (float));

    printf("Digite os %d valores float:\n", Qtd);
    for(int i = 0; i<Qtd; i++){
        scanf("%f", &val[i]);
    }

    system("cls");

    printf("Numeros float's digitados:\n");
    for(int i = 0; i<Qtd; i++){
        printf("%.2f ", val[i]);
    }
    printf("\n");

    //chamada da função ordena
    ordena(val, Qtd);
    printf("\nNumeros float's em ordem crescente:\n");
    for(int i = 0; i<Qtd; i++){
        printf("%.2f ", val[i]);
    }
    printf("\n\n");
    free(val);

    return 0;
}
