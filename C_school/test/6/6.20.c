#include <stdio.h>
int main (void)
{
    char month;
    printf("請輸入1~4:");
    scanf("%c", &month);
    
    switch (month)
    {
    case '1':
        printf("春天\n");
        break;
    case '2':
        printf("夏天\n");
        break;
    case '3':
        printf("秋天\n");
        break;
    case '4':
        printf("冬天\n");
        break;
    default:
        printf("輸入錯誤\n");
        break;
    }
    return 0;
}