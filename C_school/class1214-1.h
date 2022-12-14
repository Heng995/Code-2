#include<stdio.h>
#include<stdlib.h>
void star(int,char);
void sum_1to_n(int);

void star(int n, char ch)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%c", ch);
    printf("\n");
    
    return;
}

void sum_1to_n(int n)
{
    int i, sum=0;
    for(i=1;i<=n;i++)
        sum+=i;
    printf("total=%d\n", sum);

    return;
}