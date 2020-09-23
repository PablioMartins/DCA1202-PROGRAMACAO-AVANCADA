#include <stdio.h>

int main(void){

    int vet[] = {4,9,13};
    int i;
    //imprime na tela o conteudo de "vet" em cada posicao
    for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
    }
    printf("\n\n");
    //imprime na tela o endereco de associado a cada posicao do vetor

    for(i=0;i<3;i++){
    printf("%X ", vet+i);
    }
    printf("\n");

    return 0;
}
