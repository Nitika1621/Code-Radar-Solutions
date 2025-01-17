#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float num;
    print("Enter a floating number:");
    scanf("%f",&num);
    print("you entered: %.2f\n",num)
    return 0;