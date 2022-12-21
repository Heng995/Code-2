#include<stdio.h>
#include<stdlib.h>
//i+
int add(int n)
{
    if(n==1)
        return 1;
    else
        return (n*add(n-1));
}
int fac(int n)
{
    int i, total=1;
    for(i=1;i<=n;i++)
    {
        total*=i;
    }
    return total;
}
int main()
{
    int n;
    printf("input n:");
    scanf("%d", &n);
    //printf("sum=%d\n", add(n));
    printf("total=%d\n", fac(n));
    return 0;
}