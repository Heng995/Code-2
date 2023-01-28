#include<stdio.h>
#include<stdlib.h>
float catalan(int n)
{
    int i,c1=1;
    int sum=1;
    printf("%d  ",c1);
    for(i=1;i<=n;i++)
    {
        
        sum += (((4*n)+2)*n)/(n+2);
        printf("%d  ", sum);
    }

}
int main()
{
    float n;
    printf("輸入一個整數:");
    scanf("%f", &n);
    printf("%f\n",catalan(n));
    return 0;
}