#include <stdio.h>
#include <string.h>

int main()
{
    int x, i, j, y;
    char s[105];

    int c[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        scanf("%s", s); 
        y = 0;          

        for (j = 0; s[j] >= '0' && s[j] <= '9'; j++)
        {
            y += c[s[j] - '0'];
        }

        printf("%d leds\n", y);
    }

    return 0;
}
