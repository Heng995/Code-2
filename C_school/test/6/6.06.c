#include <stdio.h>
int main (void)
{
    int kg, cm;
    printf("請輸入身高(CM) 體重(KG):");
    scanf("%d %d", &cm, &kg);

    if(kg > 90 && cm < 180){
        printf("體重過重\n");
    }
    else{
        printf("不會過重\n");
    }
    return 0;
}