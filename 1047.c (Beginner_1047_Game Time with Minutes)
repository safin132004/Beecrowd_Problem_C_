#include <stdio.h>

int main()
{
    int h1, m1, h2, m2;
    int hours, minutes;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    if (h1 == h2 && m1 == m2) {
        hours = 24;
        minutes = 0;
    } else {
        if (m2 < m1) {
            m2 += 60;
            h2 -= 1;  // Borrow 1 hour for the minutes
        }

        if (h2 < h1) {
            h2 += 24;  // Handle crossing midnight
        }

        hours = h2 - h1;
        minutes = m2 - m1;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);

    return 0;
}
