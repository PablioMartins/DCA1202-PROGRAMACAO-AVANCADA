#include <stdio.h>

int main(void){
    int *p, x, mat[4] = {10, 20, 30, 40};

    p = mat + 1;
    printf("p = %p | mat = %p | mat + 1 = %p\n", p, mat, mat +1);
    // expressão valida "p" recebe o endereco de "mat[1]"

    //p = mat++;
    //printf("p = %p | mat = %p | mat + 1 = %p\n", p, mat, mat++);
    // expressao invalida o compilador nao reconhece como incremento no endereco

    //p = ++mat;
    //printf("p = %p | mat = %p | mat + 1 = %p\n", p, mat, mat++);
    // expressao invalida o compilador nao reconhece como incremento no endereco

    x = (*mat)++;
    printf("x = %d | (*mat)++ = %d \n", x, (*mat)++);
    // expressao valida, porem "x" recebe o conteudo "mat[0]" antes do incremento de uma unidade no valor.
}
