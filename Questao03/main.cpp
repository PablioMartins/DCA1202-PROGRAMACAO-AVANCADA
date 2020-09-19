#include <stdio.h>

int main(void){
    int i = 5, j = 2;
    int *p,*q;

    //p = i;
    //"p" e um ponteiro, deve receber enderecos. (ilegal)

    q = &j;
    //"q" recebeu o endereco de j
    printf("R.: %p\n", q);

    p = &*&i;
    //"p" recebeu o endereco do conteudo do endereco de "i".
    // logo "p" recebeu o endereco de "i".
    printf("R.: %p\n", p);

    //i = (*&)i;
    //"(*&)" ilegal.

    i = *&j;
    // "i" recebe o conteudo do endereco de "j".
    printf("R.: %d\n", i);
    i = 5;

    i = *&*&j;
    // "i" recebe o conteudo do endereco de j.
    printf("R.: %d\n", i);
    i = 5;

    //q = *p;
    // "q" e do tipo ponteiro "recebe apenas enderecos", por isso "p" nao pode
    // receber conteudo de "p". (ilegal)

    p = &i;
    q = &j;
    i = (*p)++ + *q;
    // "i" recebera o valor do conteudo de "p" incrementado em 1 somado ao conteudo de "q".
    // Resposta: (5+1)+2 = 8
    printf("R.: %d \n", i);
    // Na teoria era pra contecer isso descrito acima porem nao ocorreu...
    // funcionou para expressao abaixo ---->
    i = 5;
    i = ++(*p) + *q;
    printf("R.: %d \n", i);

    return 0;
}
