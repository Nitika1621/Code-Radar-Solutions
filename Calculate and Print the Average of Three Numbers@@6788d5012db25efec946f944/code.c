#include <stdio.h>
int main()
{
    int num1,num2,num3;
    float average;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    average = (num1 + num2 + num3)/3.0;
    printf("Average: %.2f\n",num1,num2,num3,average);
    return 0;
}

