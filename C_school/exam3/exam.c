#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
float cal(float p, float r, int n)
{
    float s;

    s = p+pow((1+r),n);
    return s;
}
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
double three(int n1, double n2)
{
    int i;
    double sum=0;
    for(i=0;i<n1;i++)
    {
        sum+=1/n2;
    }
    sum= 1/(sum/n1);
    return sum;
}
void perfect(int n)
{
    int i,j,s;
    for( i=2; i<=n; i++ )
    {
        s=0; 
        for( j=1; j<i; j++ )
        {
            if(i%j == 0)
                s += j;
        }
        if(s == i)
            printf("It's a perfect number:%d\n", i);
    }
}

int main()
{
    int item;
    char ans;
    int i,j,s;
    float p,f,n1,n2,n;
    do
    {
        system("cls");
        printf(" 1.出本利合S=p+(1+r)\n");        
        printf(" 2.將10個5~15 的亂數取平均值後傳回\n");
        printf(" 3.計算兩数(宣告為double)的調和平均数\n");
        printf(" 4.我出1000之內的所有完美數\n");
     

        printf("\nselect item:");
        scanf("%d", &item);

        switch (item)
        {
        case 1:
            printf("input p, f, n:");
            scanf("%f%f%d", &p,&f,&n);
            printf("%0.2f", cal(p,f,n));
            break;
        case 2: 
            randavg();
            break;
        case 3: 
            printf("請輸入兩數:\n");
            scanf("%f%f", &n1, &n2);
            printf("%f",three(n1,n2));
            break;
        case 4:
            n=1000;
            perfect(n);
            break;
        }
        printf("play again?");
        ans=getch();
        printf("\n");
    } while (ans=='y'||ans=='Y');
    return 0;
}