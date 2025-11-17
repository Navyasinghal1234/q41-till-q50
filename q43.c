//WAP TO CHECK IF A NUMBER IS A STRONG NUMBERS
#include <stdio.h>

int main() {
    int n, num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;

    while (num > 0) {
        digit = num % 10;

        // find factorial of the digit
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        num = num / 10;
    }

    if (sum == n)
        printf("%d is a Strong Number.", n);
    else
        printf("%d is not a Strong Number.", n);

    return 0;
}
