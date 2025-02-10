#include <stdio.h>

int main() {
    int a, b;
    // Read two integers from the user
    scanf("%d %d", &a, &b);
    // Check if the numbers have opposite signs using logical and relational operators
    if ((a > 0 && b < 0) || (a < 0 && b > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
