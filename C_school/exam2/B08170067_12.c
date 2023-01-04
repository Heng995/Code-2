#include<stdio.h>
#include<stdlib.h>

void print99()
{
    printf("*****THE 9*9 ARITHEMETIC TABLE**\n");
    printf("  ");
    for(int a=1;a<=9;a++)
    {
        printf("%4d",a);
    } 
    printf("\n!--------------------------!\n");
    for(int i=1;i<=9;i++)
    {
        printf("%d!", i);
        for(int j=1;j<=9;j++)
        {
            
            printf("%4d",i*j);
        }
        printf(" !\n");
    }
        printf("!--------------------------!\n");
    return;
}
int main()
{
    print99();
    return 0;
}