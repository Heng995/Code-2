#include <stdio.h>

int main(void)
{
    int a,b;
    char c;
    
    printf("請輸入運算式(ex:1-2):");
    scanf("%d %c %d", &a,&c,&b);
    
    switch(c)
    {
        case '+':
            printf("%d+%d=%d\n",a,b,a+b);
            break;
        case '-':
            printf("%d-%d=%d\n",a,b,a-b);
            break;
        case '*':
            printf("%d*%d=%d\n",a,b,a*b);
            break;
        case '/':
            printf("%d/%d=%f\n",a,b,(float)a/b);
            break;
        default:
            printf("Error!\n");
    }
    return 0;
}
