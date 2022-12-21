#include<stdio.h>
#include<stdlib.h>
int f(int n)
{
    if(n==1||n==2)
        return 1;
    else
        return(f(n-1)+f(n-2));
    
}
int main()
{
    int n, i; 
    printf("int n=:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("%d ", f(i));
    }
    printf("\n");
    return 0;
}