#include"class1214-1.h"

int main()
{
    int n;
    char ch;

    printf("input number:");
    scanf("%d",&n);

    fflush(stdin);

    printf("input char:");

    ch=getchar();

    printf("hello\n");

    star(n,ch);
    sum_1to_n(n);
    star(n,ch);
    system("pause");
    return 0;
    
}