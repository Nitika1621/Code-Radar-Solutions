#include <stdio.h>
int main()
{
    float a,b,product;
    printf("enter a:");
    scanf("%f",&a);

    printf("enter b:");
    scanf("%f",&b);

    product = a * b;
    printf("product: %.2f\n",product);
    return 0;
}