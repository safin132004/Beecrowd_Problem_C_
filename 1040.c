#include<stdio.h>
int main ()
{
    double N1 , N2 , N3 , N4 ;
    scanf("%lf%lf%lf%lf",&N1 ,&N2 , &N3 , &N4);


    double X =((N1*2) + (N2*3) + (N3*4) + (N4*1))/10.0 ;
    printf("Media: %.1lf\n", X );

    if (7.0<=X)
    {
        printf("Aluno aprovado.\n");

    }
    else if (5.0>=X)
    {
        printf("Aluno reprovado.\n");
    }
    else if (5.0<=X && 6.9>=X)
    {
        printf("Aluno em exame.\n");
    }

    double N5 ;
    scanf("%lf",&N5);
    printf("Nota do exame: %.1f\n", N5);


    double Y = ( X + N5 ) / 2 ;
    if ( Y >= 5.0 )
    {
        printf("Aluno aprovado.\n");
    }
    else
    {
        printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1lf\n", Y );
    return 0;
}






















