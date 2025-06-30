#include<stdio.h>
int main ()
{
    int A , B ;
    scanf("%d%d", &A ,&B);

    if (A==B)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if (A < B)
    {
        int d = B-A ;
        printf("O JOGO DUROU %d HORA(S)\n", d);
    }
    else
    {
        int s = ( 24 - A ) + B ;
        printf("O JOGO DUROU %d HORA(S)\n", s);
    }
    return 0;
}
