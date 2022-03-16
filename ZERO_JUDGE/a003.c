#include<stdio.h>
int main()
{
    int m,d,s;
    scanf("%d %d",&m,&d);
    s = (m*2+d)%3;
    if(s==0){
        printf("普通");
    }
    if(s==1){
        printf("吉");
    }
    if(s==2){
        printf("大吉");
    }
    return 0;
}