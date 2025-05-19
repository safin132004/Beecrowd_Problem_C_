#include<stdio.h>
int main ()
{
    int NUMBER , A  ;
    double B , SALARY ;
    scanf("%d %d %lf",&NUMBER, &A ,  &B );
    SALARY = A * B ;

    printf("NUMBER =U$ %d\n", NUMBER);
    printf("SALARY =U$ %.2f\n", SALARY);


    return 0 ;

}


