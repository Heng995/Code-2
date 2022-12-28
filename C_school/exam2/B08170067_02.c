#include<stdio.h>
#include<stdlib.h>
float randavg()
{
    int i, result, sum=0;
    for(i=0;i<10;i++)
    {
        result = rand()%(15-5+1)+5;
        printf("%d\n",result);
        sum = sum + result;        
    }
    return printf("%f\n", sum/10.0);
        
}

int main()
{
    randavg();
    return 0;

}