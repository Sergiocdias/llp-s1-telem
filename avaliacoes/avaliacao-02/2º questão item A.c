// S�rgio Cavalcante Dias
// Segunda quest�o, item A
// Imprimir m�ltiplos de 4 usando o comando continue

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
