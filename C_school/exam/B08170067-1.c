//輸入的四位數字是否為迴文(palindrome):由左至右讀的數字，
//和由右至左讀的數字是一樣的話，則稱為迴文數字(ex:1221)。
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, n1, n2, n3, n4;
    printf("輸入的四位數字是否為迴：");
    scanf("%d", &num);
    n1 = num / 1000 % 10 % 3;
    n2 = num / 100 % 10 % 3;
    n3 = num / 10 % 10 % 3;
    n4 = num / 1 % 10 % 3;
    if (n1 == n4 && n2 == n3)
        printf("%d是迴文\n", num);
    else
        printf("%d不是迴文\n", num);
    return 0;
}