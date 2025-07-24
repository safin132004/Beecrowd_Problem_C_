#include <stdio.h>

int main()
{
    float x[12][12], sum = 0.0;
    int i, j;
    char s;

    scanf(" %c", &s);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%f", &x[i][j]);
        }
    }

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            if (i + j > 11)
            {
                sum += x[i][j];
            }
        }
    }

    if (s == 'M')
    {
        sum = sum / 66.0;

        printf("%.1f\n", sum);

        return 0;
    }
}
