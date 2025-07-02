#include <stdio.h>

int main() {
    float num;
    int count = 0;

    // Read 6 numbers and check if each is positive
    scanf("%f", &num);
    if (num > 0) count++;

    scanf("%f", &num);
    if (num > 0) count++;

    scanf("%f", &num);
    if (num > 0) count++;

    scanf("%f", &num);
    if (num > 0) count++;

    scanf("%f", &num);
    if (num > 0) count++;

    scanf("%f", &num);
    if (num > 0) count++;

    // Print how many were positive
    printf("%d valores positivos\n", count);

    return 0;
}

