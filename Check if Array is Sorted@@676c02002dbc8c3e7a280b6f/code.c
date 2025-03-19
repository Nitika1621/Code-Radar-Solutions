#include <stdio.h>

int isSorted(int number) {
    int prevDigit = 10; 

    while (number > 0) {
        int currentDigit = number % 10; 

        if (currentDigit > prevDigit) {
            return 0;
        }

        prevDigit = currentDigit; 
        number /= 10;
    }

    return 1; 
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isSorted(number)) {
        printf("The digits of %d are sorted in non-decreasing order.\n", number);
    } else {
        printf("The digits of %d are NOT sorted in non-decreasing order.\n", number);
    }

    return 0;
}
// Your code here...