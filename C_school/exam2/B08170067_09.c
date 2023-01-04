#include<stdio.h>
#include<stdlib.h>
void printout(char ch, int i, int j)
{
    int a,b;
    for(a=1;a<=i; a++)
    {
        for(b=1;b<=j;b++)
        {
            printf("%s", ch);
        }
        printf("\n");
    }
}
int main()
{
    int i,j;
    char ch[10];
    printf("中i代表行數，j代表個數，ch 代表要印出的宇元:");
    scanf("%d%d%s",&i,&j,&ch);
    printout(ch,i,j);
    return 0;
    
}