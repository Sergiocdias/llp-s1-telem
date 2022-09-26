// Sérgio Cavalcante Dias
// Segunda questão, item A
// Imprimir múltiplos de 4 usando o comando continue

#include<stdio.h>

main(){
	int i;
	while (i<=100){
		i++;
		if (i % 4 != 0){
			continue;
		}
		printf("%d\n",i);
	}
	
		
}
