#include <stdio.h>

int main(void){
    int pulo[6] = {1, 2, 3, 4, 5, 6};
    printf("%d\n", *(pulo + 2)); //faz referencia ao valor na posicao "3" do vetor. <-- Resposta
    printf("%d\n", *(pulo + 4)); //faz referencia ao valor na posicao "5" do vetor.
    printf("%p\n", pulo + 2); //faz referencia ao endereco de memoria da posicao "3"
    printf("%p\n", pulo + 4); //faz referencia ao endereco de memoria da posicao "5".
    return 0;
}
