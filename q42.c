//WAP TO CHECK IF A NUMBER IS A PERFECT NUMBER.
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Find divisors from 1 to n/2
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n)
        printf("%d is a Perfect Number.", n);
    else
        printf("%d is not a Perfect Number.", n);

    return 0;
