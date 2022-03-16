#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num;
    char ch;
    
    printf("請輸入一個數字：");
    scanf("%d", & num);
    fflush(stdin);
   
    printf("請輸入一個字元：");
    scanf("%c", &ch);
    printf("num=%d, ASSCII of ch=%d\n",num,ch);
    
    system("pause");
    return 0;
    
}
