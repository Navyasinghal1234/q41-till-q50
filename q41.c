//WAP TO SWAP THE FIRST AND LAST DIGIT OF A NUMBER
#include <stdio.h>

int main() {
    int n, num, first, last, digits = 0, power = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;
    last = num % 10;       // last digit

    // extract first digit + count digits
    while (num >= 10) {
        num = num / 10;
        digits++;
    }
    first = num;           // first digit

    // calculate 10^(digits)
    for (int i = 0; i < digits; i++) {
        power = power * 10;
    }

    // middle part of the number
    int middle = (n % power) / 10;

    // swapped number
    int swapped = last * power + middle * 10 + first;

    printf("Swapped number: %d", swapped);

    return 0;
}
