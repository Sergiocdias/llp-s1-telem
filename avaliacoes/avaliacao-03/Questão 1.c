//aluno: S�rgio Cavalcante Dias
//Avalia��o 3- Quest�o 1
#include<stdio.h>
#include<locale.h>
int funcao(int x, int y, int z){
	int delta;
    float raiz,raiz1,raiz2;
	delta = (y*y) - 4*x*z;
	printf("\no delta � %d\n",delta);
	if (delta>0){
		raiz= (-y+sqrt(delta))/(2*x);
		printf("a primeira raiz da fun��o �: %0.2f\n",raiz);
		raiz1= (-y-sqrt(delta))/(2*x);
		printf("a segunda raiz da fun��o �: %0.2f\n",raiz1);
	} 
	else if (delta==0){
		raiz2= (-y+sqrt(delta))/(2*x);
	 printf("a raiz da fun��o �: %0.2f\n",raiz2);
	}
	else
	printf("Ra�zes Imagin�rias");
	return;	
}
main(){	
     setlocale(LC_ALL,"Portuguese");
     int a,b,c;
	printf("digite o valor de a,b, e c:\n");
	scanf("%d%d%d",&a,&b,&c);
	funcao(a,b,c);	
	return 0;
}
