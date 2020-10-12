/*
Testado em ambiente linux-ubuntu

tempos obtidos em três execuções>>

--Primeira--
Tempo para GC_MALLOC: 584161.0000
Tempo para MALLOC: 230268.0000

--Segunda--
Tempo para GC_MALLOC: 569297.0000
Tempo para MALLOC: 242832.0000

--Terceira--
Tempo para GC_MALLOC: 572841.0000
Tempo para MALLOC: 240554.0000
*/

#include <gc.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  int i;
  
  //inicialização garbage colletor
  GC_INIT ();
  float ti_gc, tf_gc;
  ti_gc = clock();
  for(i = 0; i <10000000; i++){
  	//alocacao pelo GC
  	int *p = (int*) GC_MALLOC(sizeof (int));
  }
  tf_gc = clock() - ti_gc;
   
  float ti_mal, tf_mal;
  
  ti_mal = clock();
  for(i = 0; i < 10000000; i++){
   	int *p = (int*) malloc(sizeof (int));
   	free(p);  
  }
  tf_mal = clock() - ti_mal;
  
  printf("Tempo para GC_MALLOC: %.4f\n", tf_gc);
  printf("Tempo para MALLOC: %.4f\n\n", tf_mal);

  return 0;
}
