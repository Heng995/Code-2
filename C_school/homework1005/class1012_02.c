#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,r,l;
    printf("請輸入圓心座標:");
    scanf("%f %f",&x1, &y1);
    printf("請輸入半徑：");
    scanf("%f", &r);
    printf("請輸入座標：");
    scanf("%f %f", &x1, &y2);
    l=abs(x2-x1)*abs(y2-y1);
    l*=l;
    if(l>r)
        printf("點在園外");
    else
        printf("點在園內");
    
    return 0;
}