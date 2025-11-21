#include <stdio.h>

int main() {
    int lower, upper, i, j, isPrime;
    scanf("%d %d", &lower, &upper);
    for (i = lower; i <= upper; i++) {
        if (i > 1) {
            isPrime = 1;
            for (j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime)
                printf("%d\n", i);
        }
    }
    return 0;
}