#include<stdio.h>
#include<stdlib.h>
void star();
void star_n(int);
int sumton();
double power(float,int);
void print99();

int main()
{
    int n, total, y;
    float x;
    double power_s;
    
    printf("hello\n");
    //1
    star();
    printf("kitty\n");
    star();
    printf("intput number n:");
    scanf("%d", &n);
    //2
    star_n(n);
    //3
    total=sumton();
    printf("1+2+3+....=%d\n", total);
    //4
    printf("base x, power y: ");
    scanf("%f%d", &x,&y);

    total=sumton();
    printf("1+2+3+....=%d\n", total);
    //5
    print99();
    system("pause");
    return 0;
}
void print99()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            printf("%d*%d=%d",i,j,i*j);
        }
        printf("\n");
    }
    return;
}
double power(float x, int y)
{
    double po=1;
    for(int i=1;i<=y;i++)
        po*=x;
    return po;
}
int sumton()
{
    int i, sum=0,m;
    printf("intput number m:");
    scanf("%d", &m);

    for(i=1;i<=m;i++)
        sum+=i;
    return sum;
}
void star_n(int m)
{
    int i;
    for(i=1;i<=m;i++)
    {
        printf("*");
    }
    printf("\n");
}
void star()
{
    printf("*********\n");
}
