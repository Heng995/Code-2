#include<stdio.h>
#include<math.h> //pow()
int N,M,len;
int isarm(int n){
    int cnt=0,tmp=n,check=n,ans=0;
    while(tmp){
        cnt++;
        tmp/=10;
    }
    while(n){
        ans+=pow(n%10,cnt);
        n/=10;
    }
    if(ans==check)return 1;
    return 0;
}
int main()
{
    scanf("%d%d",&N,&M);
    int ok=0;
    for(int i=N;i<=M;i++){
        if(isarm(i)){
            ok=1;
            printf("%d ",i);
        }
    }
    if(!ok)printf("none");
    printf("\n");
    return 0;
}