#include<stdio.h>
int main ()
{
    int x , y ;

    int N[20];
    for (int i = 0 ; i < 20 ; i++ )
    {
        x = N[i];
        scanf("%d", &x);
    }
    for (int i = 0 ; i < 10 ; i++ )
    {
        y = x ;
        x = N[19-i];
        N[19-i] = y;
    }
    for (int i = 0 ; i < 20 ; i++)
    {
        printf("N[%d] = %d\n", i , y);
    }
    return 0 ;

}
