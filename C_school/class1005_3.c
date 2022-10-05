#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    printf("C = ");
    scanf("%d",&c);

    if((a>b)&&(a>c)){
        printf("Max: A");
    }
    else if ((a>b)&&(a<c))
    {
        printf("Max: C");
    }
    else if ((a<b)&&(a>c))
    {
        printf("Max: B");
    }
    else if ((a<b)&&(a<c)){
        if(b<c)
        {
            printf("Max: C");
        }
        else
        {
            printf("Max: B");
        }
    }
    return 0;
}