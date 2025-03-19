#include <stdio.h>

int clearNthBit(int number, int n) {
    int mask = ~(1 << n); 
    return number & mask; 
}

int main() {
    int number, n;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Enter the bit position to clear (0-indexed): ");
    scanf("%d", &n);

    int result = clearNthBit(number, n);

    printf("The number after clearing bit %d is: %d\n", n, result);

    return 0;
}
