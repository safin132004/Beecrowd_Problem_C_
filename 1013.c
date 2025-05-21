#include<stdio.h>
int main ()
{
    int a , b , c;
    scanf("%d%d%d",&a,&b,&c);
    int AB = (a + b + (abs( a - b ))) / 2 ; // abs = absolute value.. abs(5) = 5 and abs(-5) = 5
    int AB1 = (AB + c + (abs( AB - c ))) / 2 ;
    printf("%d eh o maior\n", AB1);
    return 0 ;

}
