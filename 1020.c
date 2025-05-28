#include<stdio.h>
int main ()
{
    int X;

    scanf("%d",&X);
    int year = X / 365;
    int year1 = X % 365;
    int month = year1 / 30 ;
    int month1 = year1 % 30 ;
    int day = month1;
    printf(("%d ano(s)\n%d mes(es)\n%d dia(s)\n"), year , month , day);
    return 0 ;

}
