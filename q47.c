//WAP to print the following pattern.
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {        // rows
        for (int j = 1; j <= i; j++) {    // print stars equal to row number
            printf("*");
        }
        printf("\n");   // move to next line
    }

    return 0;
}
