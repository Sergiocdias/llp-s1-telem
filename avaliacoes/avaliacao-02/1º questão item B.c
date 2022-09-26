//Sérgio Cavalcante Dias
// Primeira questão, item B
// números pares múltiplos de 5:
#include<stdio.h>

main(){
	int i;
	for (i=0;i<=100;i++){
		if (i%2==0){
		printf("%d\n",i);
		if (i%5==0)
		continue;
	}
	     if (i%5==0){
	     	printf("%d\n",i);
		 }
	 }	
		
	
}
