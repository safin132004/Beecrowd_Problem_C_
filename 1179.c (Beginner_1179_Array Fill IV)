#include<stdio.h>
int main ()
{
    int x, par[5], impar[5], y=0,z=0;

    for (int i = 0 ; i < 15 ; i++)
    {
        scanf("%d", &x);

        if (x%2 == 0)
        {
            par[y]=x;
            y++;
            if (y==5)
            {
                for (int j = 0 ; j < 5 ; j++)
                {
                    printf("par[%d] = %d\n", j, par[j] );
                }
                y=0;
            }
        }
        else
        {
            impar[z]=x;
            z++;
            if (z==5)
            {
                for (int j = 0 ; j < 5 ; j++)
                {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                z=0;
            }
        }
    }
    for (int i = 0 ; i < z ; i ++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for (int i = 0 ; i < y ; i ++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;



}
