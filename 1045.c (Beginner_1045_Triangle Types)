#include<stdio.h>
int main ()
{
    double A1, B1, C1, A, B, C ;
    scanf("%lf%lf%lf",&A1, &B1,&C1 );
    if (A1 >= B1 && A1 >= C1)
    {
        A = A1;
        B = B1;
        C = C1;
    }
    else if (B1 >= A1 && B1 >= C1)
    {
        A = B1;
        B = A1;
        C = C1;
    }
    else
    {
        A = C1;
        B = A1;
        C = B1;
    }

    if(A >= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if (A*A == B*B + C*C)

        {
            printf("TRIANGULO RETANGULO\n");
        }
        if (A*A > B*B + C*C)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (A*A < B*B + C*C)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A==B && B==C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if (A==B || A==C || B==C)
        {
            printf("TRIANGULO ISOSCELES\n");
        }


    }
    return 0;
}
