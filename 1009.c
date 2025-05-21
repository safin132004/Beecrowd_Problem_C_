#include<stdio.h>
int main ()
{
    char NAME;
    double A , B , X , Y ;
    scanf("%s", &NAME );


    scanf("%lf", &A );
    scanf("%lf", &B );
    X = B * 0.15 ;
    Y = X + A ;

    printf("TOTAL = R$ %.2lf\n", Y );
    return 0 ;

}
