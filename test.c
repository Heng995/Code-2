#include <stdio.h>

int main()
{
    long long n, rev = 0, remainder, org;

    printf("输入一个整数: ");
    scanf("%lld", &n);

    org = n;

    // 翻转
    while( n!=0 )
    {
        remainder = n%10;
        rev = rev*10 + remainder;
        n /= 10;
    }

    // 判断
    if ( org == rev )
        printf("%lld 是回文数\n", org);
    else
        printf("%lld 不是回文数\n", org);

    return 0;
}