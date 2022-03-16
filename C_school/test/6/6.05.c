#include <stdio.h>
int main (void)
{
    int kg;
    printf("請輸入體重(KG):");
    scanf("%d", &kg);

    if(kg > 90){
        printf("體重過重\n");
    }
    else{
        printf("不會過重\n");
    }
    return 0;
}