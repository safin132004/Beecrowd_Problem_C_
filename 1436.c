#include<stdio.h>
int main ()
{
    int box[2001] = {0};
    int N,x ;
    scanf("%d", &N );
    for (int i = 0 ; i < N ; i++)
    {
        scanf("%d",&x);
        box[x]++;
    }

    for (int i = 1 ; i <= 2000 ; i++ )
    {
        if (box[i] > 0)
        {
            printf("%d aparece %d vez(es)\n", i, box[i]);
        }
    }
    return 0 ;

}
