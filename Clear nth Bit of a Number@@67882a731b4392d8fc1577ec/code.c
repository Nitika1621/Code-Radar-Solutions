#include <stdio.h>

int clearNthBit(int number, int n) {
    int mask = ~(1 << n); 
    return number & mask; 
}

int main() {
    int number, n;
    scanf("%d", &number);
    scanf("%d", &n);
    int result = clearNthBit(number, n);

    printf("%d\n", result);

    return 0;
}
