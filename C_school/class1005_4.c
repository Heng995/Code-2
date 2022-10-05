#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    int max;
    printf("輸入三個數：");
    scanf("%d %d %d",&a,&b,&c);

    max=((a>b)?((a>c)?a:c):((b<a)?(a<c)?a:c);
    printf("max=%d \n", max);
    return 0;
    
}