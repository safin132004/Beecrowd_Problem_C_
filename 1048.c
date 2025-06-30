#include<stdio.h>
int main ()
{
    double x, x1, y;
    scanf("%lf",&x);

    if (x>0 && x<400)
    {
        y = 15;
        x1 = x * 0.15 ;
        x += x1;
    }
    else if (x>400.01 && x<800.00)
    {
        y = 12;
        x1 = x * 0.12 ;
        x += x1;
    }
    else if (x>800.01 && x<1200.00)
    {
        y = 10;
        x1 = x * 0.1 ;
        x += x1;
    }
    else if (x>1200.01 && x<2000.00)
    {
        y = 7;
        x1 = x * 0.07 ;
        x += x1;
    }
    else if (x>2000.00)
    {
        y = 4;
        x1 = x * 0.04 ;
        x += x1;
    }
    printf("Novo salario: %d\n",x);
    printf("Reajuste ganho: %d\n",x1);
    printf("Em percentual: %d%\n",y);
    return 0;

}
