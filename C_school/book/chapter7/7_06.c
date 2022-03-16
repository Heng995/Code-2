#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n, i=1, sum = 0;
    char q;
    do
    {
        printf("請輸入n值:");
        scanf("%d", &n);
    } while (n<0);
    do
    {
        sum += i++;
    } while (i<=n);
    if(n==1){
        printf("1=%d\n", sum);
        }
    else if(n == 2){
        printf("1+2=%d\n", sum);
    }
    else if(n == 3){
        printf("1+2+3=%d", sum);
    }
    else{
        printf("1+2+...+%d=%d\n", n, sum);    
    }



    system("pause");
    return 0;

}