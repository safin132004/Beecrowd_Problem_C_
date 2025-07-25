#include <stdio.h>
#include <string.h>

int main()
{
    char n[1010];

    while (scanf("%s", n) != EOF)
    {

        int f[10] = {0};

        for (int i = 0; n[i] != '\0'; i++)
        {
            f[n[i] - '0']++;
        }

        int mf = f[0];
        int result = 0;

        for (int i = 1; i < 10; i++)
        {

            if (f[i] > mf)
            {
                mf = f[i];
                result = i;
            }

            else if (f[i] == mf)
            {
                if (i > result)
                {
                    result = i;
                }
            }
        }

        printf("%d\n", result);
    }

    return 0;
}
