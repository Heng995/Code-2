#include <stdio.h>

int main(void)
{
    int num;
    
    printf("Please enter num = :");
    scanf("%d", &num);
    
    if(num%2!=0)
    {
        printf("num是奇數\n");
    }
    
    else
    {
        printf("num是偶數\n");
    }
    
    return 0;
}
