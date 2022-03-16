#include <stdio.h>

int main(void)
{
    int a,b,x,y,value;
    
    printf("2A(3X+Y)-b = \n");
    printf("A = : ");
    scanf("%d", &a);
    printf("B = : ");
    scanf("%d", &b);
    printf("X = : ");
    scanf("%d", &x);
    printf("Y = : ");
    scanf("%d", &y);
    
    value = 3*x+y;
    value = 2*a*value-b;
    
    printf("2*%d(3*%d+%d)-%d = %d\n",a,x,y,b,value);
    
    return 0;
    
}
