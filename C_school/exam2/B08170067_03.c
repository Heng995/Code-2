#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
double two(int n1, double n2)
{
    int i;
    double sum=0;
    for(i=0;i<n1;i++)
    {
        sum+=1/n2;
    }
    sum= 1/(sum/n1);
    return sum;
}

int main()
{
    int n1, n2;
    printf("請輸入兩數：");
    scanf("%f%f", &n1, &n2);
    printf("%f",two(n1,n2));
    return 0;
}