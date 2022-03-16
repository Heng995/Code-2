#include <stdio.h>
int main(void)
{
    double x, y;
    printf("輸入座標(x,y):");
    scanf("%lf %lf", &x, &y);

    if(x == 0.0){
        printf("即為X軸\n");
    }
    else if(y == 0.0){
        printf("即為Y軸\n");
    }
    else if((x > 0.0) && (y > 0.0)){
        printf("第一象限\n");
    }
    else if(x < 0.0 && y > 0.0){
        printf("第二象限\n");
    }
    else if(x < 0.0 && y < 0.0){
        printf("第三象限\n");
    }
    else{
        printf("第四象限\n");
    } 
    return 0;
}