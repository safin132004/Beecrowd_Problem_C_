#include <stdio.h>

int main()
{
    int x;
    scanf("%d\n", &x);
    for (int i = 0; i < x; i++)
    {
        char s[1000];
        scanf("%s", s);
        printf("I am Toorg!\n");
    }

    return 0;
}
