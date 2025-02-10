#include <stdio.h>
int main()
{
    float a,b,product;
    printf("Enter a:");
    scanf("%f",&a);

    printf("Enter b:");
    scanf("%f",&b);

    product = a * b;
    printf("Product: %.2f\n",product);
    return 0;
}