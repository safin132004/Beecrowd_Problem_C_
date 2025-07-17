#include<stdio.h>
int main ()
{
    int T,i;
    scanf("%d",&T);

    for ( i = 0 ; i < T ; i++ )
    {
        int N ;
        scanf("%d", &N);

        int age[10] = {0};

        for ( int j = 0 ; j < N ; j++ )
        {
            scanf("%d", &age[j]);
        }

        int c = age[N / 2];

        printf("Case %d: %d\n", i+1, c );

    }
    return 0 ;

}
