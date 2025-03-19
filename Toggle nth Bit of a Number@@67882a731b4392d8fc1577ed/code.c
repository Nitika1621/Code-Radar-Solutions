#include <stdio.h>
int toggleNthBit(int number, int n) {
    return number ^ (1 << n); 
}

int main() {
    int number, n;
    scanf("%d", &number);

    scanf("%d", &n);

    int result = toggleNthBit(number, n);

    printf("%d\n", result);

    return 0;
}
