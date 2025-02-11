#include <stdio.h>
int main(){
    int num1,num2,result;
    scanf("%d",&num1);
    scanf("%d",&num2);
    result=num1|num2;
    printf("The result of %d|%d is: %d\n",result);
    return 0;
}