#include <stdio.h>

int main() {
    int msb = 1<<(sizeof(int)*8-1);

    
    scanf("%d", &num);

    if (num & 1) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}