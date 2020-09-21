#include <stdio.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  // atribucao dos valores do vetor "vet"

  float *f;
  int i;
  f = vet;
  // ponteiro "f" apontado para "vet", valor guardado em "f" e o endereco de "vet[0]"

  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d | ",i);
  // escreve na tela o valor do contador

  printf("vet[%d] = %.1f | ",i, vet[i]);
  // escreve na tela o valor contido em "vet" na posicao "i".

  printf("*(f + %d) = %.1f | ",i, *(f+i));
  // escreve na tela o conteudo associado ao ponteiro "f" na posicao "i", apartir do ponteiro "f".

  printf("&vet[%d] = %X | ",i, &vet[i]);
  // escreve na tela o endereco do vetor "vet" na posicao "i", apartir do proprio vetor.

  printf("(f + %d) = %X",i, f+i);
  // escreve na tela o endereco do vetor "vet" na posicao "i", apartir do ponteiro "f"

  }
  printf("\n");
}
