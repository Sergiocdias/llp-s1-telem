// Aluno: Sérgio Cavalcante Dias
// Avaliação 05
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

    printf("Escreva um número inteiro:\n ");
    scanf("%d",&x);
    printf("Escreva um número decimal:\n");
    scanf("%f",&y);

    fprintf(arquivo, "o número inteiro digitado foi: %d\n", x);
    fprintf(arquivo, "o número decimal digitado foi: %.2f", y);

    fclose(arquivo);

    printf("Dados gravados no arquivo: avaliacao 5 Sergio!");

    getch();
    return(0);

}
