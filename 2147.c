#include <stdio.h>

int main()
{
    int x, y = 0;
    char s[10001];

    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        scanf("%s", s);
        y = 0 ;
        for (int i = 0; s[i] != '\0'; i++)
        {
            y++;
        }

        printf("%.2f\n", y * 0.01);
    }

    return 0;
}
