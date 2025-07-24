#include <stdio.h>
int main()
{
    int x[12][12], i, j;
    char s;
    scanf("%c",&s);
    float n, sum ;
    for (int i = 0; i < 12; i++) // row
    {

        for (int j = 0; j < 12; j++) // coloum
        {
            scanf("%f",&x[i] [j]);
        }
    }
    for (int i = 0; i < 12; i++) // row
    {
        int k =1;

        for (int j = k; j < 12; j++) // coloum
        {
            sum = sum + x[i][j];
            k++;
        }
    }
    
    if(s == 'M')
    {
        sum = sum / 12.0 ;
    }
    printf("%.1f\n", sum);

    return 0;
}