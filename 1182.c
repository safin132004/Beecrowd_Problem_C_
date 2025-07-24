#include <stdio.h>
int main()
{
    int x, i, j;
    char s;
    float n, sum = 0.0;

    scanf("%d%c", &x, &s);
    for (int i = 0; i < 12; i++) // row
    {

        for (int j = 0; j < 12; j++) // coloum
        {
            scanf("%f", &n);

            if (j == x)
            {
                sum += n;
            }
        }
    }
    if (s == 'M')
    {
        sum = sum / 12.0;
    }

    printf("%.1f\n", sum);

    return 0;
}