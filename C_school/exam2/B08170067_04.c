#include<stdio.h>
#include<stdlib.h>
void perfect(int n)
{
    int i,j,s;
    for( i=2; i<=n; i++ )
    {
        s=0; 
        for( j=1; j<i; j++ )
        {
            if(i%j == 0)
                s += j;
        }
        if(s == i)
            printf("It's a perfect number:%d\n", i);
        
    }
}
int main()
{
    int n=1000;
    printf("1000之內的所有完美數:");
    perfect(n);
    return 0;
}