#include <stdio.h>

int getLowestSetBit(int number) {
    return number & -number;
}

int main() {
    int number;
    scanf("%d", &number);

    if (number == 0) {
        printf("The number has no set bits.\n");
    } else {
        int lowestSetBit = getLowestSetBit(number);
        printf(" %d\n",  lowestSetBit);
    }

    return 0;
}
