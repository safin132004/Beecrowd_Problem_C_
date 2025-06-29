#include<stdio.h>
#include<math.h>
int main ()

{
    float a , b , c ;
    scanf("%f%f%f",&a,&b,&c);




    if (a < b + c && b < a + c && c < a + b )
    {
        float Perimetro = a+b+c ;
        printf("Perimetro = %.1f\n", Perimetro);

    }
    else
    {
        float area = 0.5 * ( a + b ) * c ;
        printf("Area = %.1f\n", area);
    }
    return 0 ;

}
