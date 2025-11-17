//WAP TO PRINT THE FOLLOWING PATTERN.
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {          // rows
        for (int j = 1; j <= i; j++) {      // numbers in each row
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
