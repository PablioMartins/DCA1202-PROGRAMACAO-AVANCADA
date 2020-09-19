#include <stdio.h>

int main(void){
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    printf("Resultado 1: %d\n", p == &i);
    //Obitivemos como resposta o valor "1", Logo afimacão "Verdadeira".

    printf("Resultado 2: %d\n", *p - *q);
    //Obitivemos como resposta "-2"

    printf("Resultado 3: %d\n", **&p);
    //Obitivemos como resposta "3"

    printf("Resultado 1: %d\n", 3 - *p/(*q) + 7);
    //Obitivemos como resposta "10"
}
