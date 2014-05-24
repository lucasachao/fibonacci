#include <stdlib.h>
#include <stdio.h>

int v0 = 0;
int v1 = 1;

int valor = 0;
int pos = 0;

void fibo_ite()
{
    for(int i = 1; i < pos; i++)
    {
        valor = v0 + v1;
        v0 = v1;
        v1 = valor;
    }
    printf("F(%d) = %d\n", pos, valor);
}

void fibo_recu(int local)
{
    if(local == pos)
        printf("F(%d) = %d\n", pos, valor);

    else
    {
        valor = v0 + v1;
        v0 = v1;
        v1 = valor;
        fibo_recu(local+1);
    }
}

int main()
{
    printf("Digite qual posicao voce gostaria na sequencia de fibonacci\n");
    scanf("%d", &pos);

    if(pos == 0)
        printf("F(%d) = %d\n",pos, v0);
    else if(pos == 1)
        printf("F(%d) = %d\n",pos, v1);
    else
    {
        printf("Digite 0 para iterativo ou 1 para recursivo\n");
        int tipo = -1;
        scanf("%d", &tipo);

        if(tipo == 0)
            fibo_ite();

        else if(tipo == 1)
            fibo_recu(1);

        else
            printf("Opcao invalida!\n");
    }
}
