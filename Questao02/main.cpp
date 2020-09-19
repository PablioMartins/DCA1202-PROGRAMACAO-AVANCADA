#include <stdio.h>

int main(void){
    int x = 5, *p;
    p = &x;

    printf("%x %d %d %d %d\n", p,*p+2,**&p,3**p,**&p+4);
    // 1 - "p" mostra o endereco de memoria de "x" apontado por "p"
    // 2 - Pega o conteudo de "x" e soma 2, temos 5+2 = "7"
    // 3 - Pega o conteudo de "p" que e o endereco de "x", e depois pega o conteudo do endereco de "x"
    // 4 - Multiplica "3" pelo conteudo de "x", 3*5 = "15"
    // 5 - faz o procedimento do item "3" e soma "4", 5 + 4 = "9"
}
