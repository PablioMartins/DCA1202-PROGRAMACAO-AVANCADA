#include <stdio.h>
#include <stdlib.h>

void soma_vet(int *v1, int *v2, int *v3, int qtd){
    for(int i = 0; i < qtd; i++){
        v3[i] = v1[i] + v2[i];
    }
}

int main(void){
    int *vet1, *vet2, *vet3, qtd;
    printf("Digite a Quantidade de elementos dos vetores:\n");
    scanf("%d", &qtd);
    vet1 = (int*) malloc(qtd*sizeof (int));
    vet2 = (int*) malloc(qtd*sizeof (int));
    vet3 = (int*) malloc(qtd*sizeof (int));

    printf("Digite o Vetor 01:\n");
    for(int i = 0; i < qtd; i++){
        scanf("%d", &vet1[i]);
    }
    printf("Digite o Vetor 02:\n");
    for(int i = 0; i < qtd; i++){
        scanf("%d", &vet2[i]);
    }
    soma_vet(vet1, vet2, vet3, qtd);

    printf("Vetores:\n");
    printf("Vetor1:\n");
    for(int i = 0; i < qtd; i++){
        printf("%d ", vet1[i]);
    }

    printf("\n\nVetor2:\n");
    for(int i = 0; i < qtd; i++){
        printf("%d ", vet2[i]);
    }

    printf("\n\nVetor3:\n");
    for(int i = 0; i < qtd; i++){
        printf("%d ", vet3[i]);
    }
    printf("\n");
    return 0;
}
