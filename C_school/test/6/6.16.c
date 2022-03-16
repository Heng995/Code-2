#include <stdio.h>
#include <math.h>
int main (void)
{
    float a, b, c;
    double x1, x2;
    printf("ax^2 + bx + c = 0\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    
    if(b*b - 4*a*c > 0){ 
        x1 = (-b + (sqrt(b*b - 4*a*c))) / (2*c);
        x2 = (-b - (sqrt(b*b - 4*a*c))) / (2*c);
        printf("X = %f, %f\n", x1, x2);
    }
    else if(b*b - 4*a*c == 0){
        
        x1 = -b / (2*a);
        printf("1X = %0.2f %0.2f\n", x1, x1);
    }
    else printf("沒有實根\n");
    return 0;
}