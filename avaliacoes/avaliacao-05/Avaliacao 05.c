// Aluno: S�rgio Cavalcante Dias
// Avalia��o 05
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{   setlocale(LC_ALL,"Portuguese");
    FILE *arquivo;
    int x;
    float y;

    arquivo = fopen("avaliacao 5 Sergio.txt", "w");

    if(arquivo == NULL)
    {
        printf("Houve um erro na abertura do arquivo");
        return 1;
    }

    printf("Escreva um n�mero inteiro:\n ");
    scanf("%d",&x);
    printf("Escreva um n�mero decimal:\n");
    scanf("%f",&y);

    fprintf(arquivo, "o n�mero inteiro digitado foi: %d\n", x);
    fprintf(arquivo, "o n�mero decimal digitado foi: %.2f", y);

    fclose(arquivo);

    printf("Dados gravados no arquivo: avaliacao 5 Sergio!");

    getch();
    return(0);

}
