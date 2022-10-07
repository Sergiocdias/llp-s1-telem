#include <stdio.h>


int meuTamanho(char frase[]) {
  int i;
  for(i=33;frase[i]; i--) {
     printf(" %c", frase[i]);
  }
 
  return 0;
}

int main() {

  int p;
 
  char s1[] = "meu nome eh Sergio Cavalcante Dias";
 
  p = meuTamanho(s1);
   
  
 
  return 0;
}
