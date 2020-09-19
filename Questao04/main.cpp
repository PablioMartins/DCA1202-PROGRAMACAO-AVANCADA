//Respostas estao em forma de Comentario!!
#include <stdio.h>

int main(void){
     int valor;
     int *p1;
     float temp;
     float *p2;
     char aux;
     char *nome = "Ponteiros";
     char *p3;
     int idade;
     int vetor[3];
     int *p4;
     int *p5;

     /* (a) */
     valor = 10;
     p1 = &valor;
     *p1 = 20;
     printf("Letra (a): %d \n", valor);
     // Sim, o conteudo associado ao ponteiro "p1" foi mudado para 20.

     /* (b) */
     temp = 26.5;
     p2 = &temp;
     *p2 = 29.0;
     printf("Letra (b): %.1f \n", temp);
     // Sim, o conteudo associado ao ponteiro "p2" foi mudado para 29.0.

     /* (c) */
     p3 = &nome[0];
     aux = *p3;
     printf("Letra (c): %c \n", aux);
     // Sim, p3 recebe o endereco do primeiro termo da sequencia de caracteres, o do "P".
     // "aux" recebe o conteudo de "p3", logo aux recebe a letra "P".

     /* (d) */
     p3 = &nome[4];
     aux = *p3;
     printf("Letra (d): %c \n", aux);
     // Sim, p3 recebe o o endereco do quinto termo da sequencia de caracteres, o do "e"
     // "aux" recebe o conteudo de "p3", logo aux recebe a letra "e".

     /* (e) */
     p3 = nome;
     printf("Letra (e): %c \n", *p3);
     // Sim, Ao "p3" apontar para "nome" ela guarda o endereco do primeiro termo da sequencia.
     // logo o conteudo de "p3" e o primeiro termo da sequencia "P".

     /* (f) */
     p3 = p3 +4;
     printf("Letra (f): tamanho do 'char' - %d byte(s) - ", sizeof (char));
     printf("Letra '%c' \n", *p3);
     // Sim, "p3" ira receber o endereco de 4 bytes posterior ao byte referencia.
     // logo o conteudo associado ao endereco 4 bytes depois do endereco de referencia e o "e"

     /* (g) */
     p3--;
     printf("Letra (g): %c \n", *p3);
     // Sim, endereco de "p3" que estava apontando para a posicao na memoria onde estava o "e"
     // foi decrementado em 1 byte e agora esta associado a "t".

     /* (h) */
     vetor[0] = 31;
     vetor[1] = 45;
     vetor[2] = 27;
     p4 = vetor;
     idade = *p4;
     printf("Letra (h): %d \n", idade);
     // Sim, "idade" recebeu o conteudo associado ao ponteiro "p4" sendo esse o primeiro valor
     // do array "vetor", logo "idade" recebeu 31.

     /* (i) */
     p5 = p4 +1;
     idade = *p5;
     printf("Letra (i): %d \n", idade);
     // Sim, o valor associado a "p4" e o primero endereco, logo o ponteiro "p5" pegara o endereco
     // 4 bytes posteriores, ja que o int possui 4 bytes de tamanho.
     // e ao incrementar um, ele ira para o endereco "vetor[1]".

     /* (j) */
     p4 = p5 + 1;
     idade = *p4;
     printf("Letra (j): %d \n", idade);
     // Sim, como "p5" recebeu o endereco de "vetor[1]" ao incrementar mais um e atribuilo a "p4",
     // "p4" receberar o endereco de "vetor[2]".

     /* (l) */
     p4 = p4 - 2;
     idade = *p4;
     printf("Letra (l): %d \n", idade);
     // Sim, "p4" estando com o endereco de "vetor[2]" ao ser decrementado em "2" ele retorna a ser
     // associado ao endereco de "vetor[0]"

     /* (m) */
     p5 = &vetor[2] - 1;
     printf("Letra (m): %d \n", *p5);
     // Sim, "p5" pegara o endereco de "vetor[2]" decrementado em 1, logo "p5" recebera o endereco
     // de "vetor[1]".

     /* (n) */
     p5++;
     printf("Letra (n): %d \n", *p5);
     // Sim, o endereco associado a "p5" sera incrementado em 1, logo "p5" tera o endereco de "vetor[2]"

    return 0;
}
