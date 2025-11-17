//WAP TO FIND THE SUM OF SERIES: 1 + 3/4 + 5/6 + 7/8 + ...UP TO N TERMS

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int numerator = 2 * i - 1;
        float term;

        if (i == 1) {
            term = 1.0;   // first term is 1
        } else {
            term = (float)numerator / (2 * i);
        }

        sum += term;
    }

    printf("Sum of series up to %d terms = %.4f", n, sum);

    return 0;
}
