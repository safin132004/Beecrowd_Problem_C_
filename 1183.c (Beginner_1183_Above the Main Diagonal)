#include <stdio.h>
int main()
{
    float x[12][12], sum = 0.0;
    int i, j;
    char s;
    scanf("%c",&s);

    for (int i = 0; i < 12; i++) // row
    {

        for (int j = 0; j < 12; j++) // coloum
        {
            scanf("%f",&x[i] [j]);
        }
    }
    for (int i = 0; i < 12; i++) // row
    {

        for (int j = i +1 ; j < 12; j++) // coloum
        {
            sum = sum + x[i][j];
           
        }
    }
    
    if(s == 'M')
    {
        sum = sum / 66.0 ;
    }
    printf("%.1f\n", sum);

    return 0;
}
