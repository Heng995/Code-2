#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
#include<math.h>
float cal(float p, float r, int n)//1
{
    float S;

    S = p+pow((1+r),n);
    return S;
}

float randavg()//2
{
    int i1, result, sum=0;
    for(i1=0;i1<10;i1++)
    {
        result = rand()%(15-5+1)+5;
        printf("%d\n",result);
        sum = sum + result;        
    }
    return printf("%f\n", sum/10.0);
        
}

double two(int n1, double n2)//3
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
    int i,j,s,n;
    float p,f,n1,n2;

    do
    {
        system("cls");
        printf("no1.\n");
        
        printf("no2.\n");
        printf("no3.\n");
        printf("no4.\n");

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

            printf("5~15的亂數取平均:\n");
            randavg();

            break;

        case 3: 

            printf("請輸入兩數：\n");
            scanf("%f%f", &n1, &n2);
            printf("%f",two(n1,n2));

            break;

        case 4:

            n=1000;
            printf("1000之內的所有完美數:");
            perfect(n);

            break;
        }
        printf("play again?");
        ans=getch();
        printf("\n");
    } while (ans=='y'||ans=='Y');
    return 0;
}