#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void incrementa(int* val){
    printf("Funcao antes: %d\n", *val);
    (*val)++;
    printf("Funcao depois: %d\n", *val);
    return;
    
}

int main(){
    int valor = 15;
    printf("Valor do ponteiro %d\n", valor);
    incrementa(&valor);
    printf("Main depois: %d\n", valor);
   



  return 0;
}//main
