//求三數字最小值(min)，
//用if/else及條件運算子(? :)各做一次。
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, c;
    printf("輸入三個數字：");
    scanf("%d %d %d", &a, &b, &c);
    printf("最大的數：");
    if(a<b&&b<c)
    {
        printf("%d\n",c);
    }
    else if(a<b&&b>c)
    {
        printf("%d\n", b);
    }
    else if(a>b&&a<c)
    {

        printf("%d\n", c);
    }
    else if(a>b&&a>c)
    {
        printf("%d\n", a);
    }
    else if(a<c&&c<b){
        printf("%d\n", b);
    }
    else if(a<c&&c>b)
    {
        printf("%d\n", c);
    }
    return 0;

    
}