#include <stdio.h>
int main()
{
    int num,shift,result;
    scanf("%d",&num);
    scanf("%d",&shift);
    result=num>>shift;
    printf("%d",result);
    return 0;
}