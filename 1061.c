#include <stdio.h>

int main()
{
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;


    scanf("Dia %d", &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);

    scanf(" Dia %d", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);


    int start_seconds = d1 * 86400 + h1 * 3600 + m1 * 60 + s1;
    int end_seconds   = d2 * 86400 + h2 * 3600 + m2 * 60 + s2;


    int total = end_seconds - start_seconds;


    int days = total / 86400;
    total %= 86400;

    int hours = total / 3600;
    total %= 3600;

    int minutes = total / 60;
    int seconds = total % 60;



    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);

    return 0;
}

