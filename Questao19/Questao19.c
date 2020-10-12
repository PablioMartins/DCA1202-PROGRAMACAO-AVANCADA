//Este codigo foi executado em ambiente linux-ubuntu
#include <gc.h>
#include <assert.h>
#include <stdio.h>

int main (){
  int i;
  
  //inicialização garbage colletor
  GC_INIT ();
  
  for(i = 0; i <10000000; i++){
  //alocacao pelo GC
     int *p = (int*) GC_MALLOC(sizeof (int));
     //aborta a execução se p guarda algum endereço
     assert(*p == 0);
     if (i% 100000 == 0){
       //mostra o tamanho do heap
       printf("Tamanho do heap = %ld\n", GC_get_heap_size());
       }
   }
  return 0;
}
