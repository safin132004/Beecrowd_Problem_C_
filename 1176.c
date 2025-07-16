#include<stdio.h>
int main ()
{
    int T , N ;
    unsigned long long fib[61]; // unsigned long long = 64 bit & int = 32 bit

    fib[0] = 0;
    fib[1] = 1;


    for (int i = 2; i <= 60; i++)
        {
              fib[i] = fib[i - 1] + fib[i - 2];
        }

    scanf("%d",&T);

    for (int i = 0 ; i < T ; i++)
    {
        scanf("%d",&N);
        printf("Fib(%d) = %llu\n", N, fib[N]); // llu is for unsigned long long


    }



    return 0;
}
