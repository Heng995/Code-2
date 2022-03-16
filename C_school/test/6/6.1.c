#include <stdio.h>
int main(void)
{
    char n;
    printf("請輸入一個字元:");
    scanf("%s", &n);
    
    if(n >= '0' && n <= '9')
    {
        printf("此字元為數字\n");
    }
    else if((n >= 'a' && n <= 'z')||(n >= 'A' && n <= 'Z'))
    {
        printf("此字元為英文字母\n");
    }
    else
    {
        printf("此字元為其他\n");
    }
    return 0;
}