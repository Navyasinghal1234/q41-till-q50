//WAP TO FIND THE SUM OF THE SERIES : 2/3 + 4/7 + 6/11 + 8/15 +... UP TO N TERMS
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i;
        float denominator = 4 * i - 1;

        float term = numerator / denominator;
        sum += term;
    }

    printf("Sum of the series up to %d terms = %.4f", n, sum);

    return 0;
}
