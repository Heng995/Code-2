#include <stdio.h>

int main(void)
{
    int n1,n2,lar;
    printf("請輸入兩個數字：");
    scanf("%d %d", &n1,&n2);
    
    n1>n2 ? (lar=n1):(lar=n2);
    printf("%d數值比較大\n", lar);
    
    return 0;
    
}

