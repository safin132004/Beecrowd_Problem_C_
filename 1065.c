#include<stdio.h>
int main ()
{
    int x , y=0 ;

    for ( int i = 0 ; i < 5 ; i ++ )
    {
        scanf("%d", &x);
        if (x%2 == 0)
        {
            y++;
        }
    }
    printf("%d valores pares\n", y);
    return 0;
}
