#include <stdio.h>
#include <stdlib.h>
void display (char,int); 
int main (void)
{
    int n;
    char ch;
    printf("請輸入欲列印的字元:");
    scanf("%c", &ch);
    printf("請問要列印幾個字元:");
    scanf("%d", &n);
    display(ch, n);
 
    system("pause");
    return 0;
}

void display(char ch, int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%c", ch);
        if(i%10==0)
        {
            printf("\n");
        }
    return;
}