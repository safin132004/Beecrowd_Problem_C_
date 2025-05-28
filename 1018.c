#include<stdio.h>
int main ()
{
    int X;

    scanf("%d",&X);
    printf("%d\n", X);
    int p100 = X / 100 ;
     X = X % 100 ;
    int p50 = X / 50 ;
     X = X % 50 ;
    int p20 = X / 20 ;
     X = X % 20 ;
    int p10 = X / 10 ;
     X = X % 10 ;
    int p5 = X / 5 ;
     X = X % 5 ;
    int p2 = X / 2 ;
     X = X % 2 ;
    int p1 = X  ;


    printf("%d nota(s) de R$ 100,00\n", p100);
    printf("%d nota(s) de R$ 50,00\n", p50);
    printf("%d nota(s) de R$ 20,00\n", p20);
    printf("%d nota(s) de R$ 10,00\n", p10);
    printf("%d nota(s) de R$ 5,00\n", p5);
    printf("%d nota(s) de R$ 2,00\n", p2);
    printf("%d nota(s) de R$ 1,00\n", p1);
    return 0;

}
