// Aluno: Sergio Cavalcante Dias
// Avaliacao 06

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{   setlocale(LC_ALL,"Portuguese");
    FILE *arq;
    char nome[100];
    int num[3], i;

    arq = fopen("avaliacao 6 Sergio.txt", "w");

    if(arq == NULL)
    {
        printf("Houve um erro na abertura do arquivo");
        return 1;
    }

    printf("Escreva o seu nome completo:\n ");
    gets(nome);

    fprintf(arq, "seu nome �:\n%s\n", nome);
    
     for(i=0; i<3; i++){
     	printf("Digite um n�mero(at� tr�s vezes):\n");
     	scanf("%d",&num[i]);
     		
	 }
	 for(i=0; i<3; i++)
     	fprintf(arq, "O %d� n�mero digitado foi: %d\n", i+1,num[i]);
     	
    fclose(arq);

    printf("As informa��es foram salvas no arquivo: avaliacao 6 Sergio!");

    getch();
    return(0);
}
