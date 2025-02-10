#include <stdio.h>

int main() {
    int a;
    // Read an integer from the user
    scanf("%d", &a);
    // Check if 'a' is not greater than 0 using the '!' operator
    if (!(a > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
