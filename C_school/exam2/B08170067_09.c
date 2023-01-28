#include<stdio.h>
#include<stdlib.h>
void printout(char ch, int i, int j)
{
    int a,b;
    for(a=1;a<i;a++)
    {
        for(b=1;b<j;b++)
        {
            printf("%s", ch);
        }
        printf("\n");
    }
}
int main()
{
    int i,j;
    char ch[100];
    printf("中i代表行數，j代表個數:");
    scanf("%d %d",&i,&j);
    printf("ch 代表要印出的宇元:");
    ;
    scanf("%s",ch);
printf("%s", ch);

    return 0;
    
}