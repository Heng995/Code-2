#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num;
    char str[10];
    
    printf("請輸入一個整數：");
    scanf("%d", &num);
    printf("num=%d\n",num);
    
    printf("請輸入一個字串：");
    scanf(" %s", str);
    printf("str=%s\n", str);
    
    system("pause");
    return 0;
}
