//O ponteiro é um tipo especial de variável que armazena um endereço.
//declarado com um '*' antes do nome da variavel do tipo ponteiro
//Podendo ter vários tipos como: int, char, float double
//exemplo de declaração: int *px;

#include <stdio.h>

void troca(int *px, int *py){
    int aux = *px;
    *px = *py;
    *py = aux;
}

int main(void){
    int x = 21, y = 12, *px;

    px = &x;

    printf("x = %d\n", *px);
    printf("endereco de x: %X\n\n", px);

    printf("Valores antes da Troca:\n x = %d, y = %d\n\n", x, y);
    troca(&x,&y);
    printf("Valores depois da Troca:\n x = %d, y = %d\n\n", x, y);

    return 0;
}

