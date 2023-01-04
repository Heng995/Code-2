#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
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

void perfect(int n)//4
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

float catalan(int n)//5
{
    int c1=1;
    float sum=0;
    sum = (((4*n)+2)*n)/(n+2);
    return sum;
}

void printout(char ch, int i, int j)//9
{
    int a,b;
    for(a=1;a<=i; a++)
    {
        for(b=1;b<=j;b++)
        {
            printf("%s", ch);
        }
        printf("\n");
    }
}

void print99()//12
{
    printf("*****THE 9*9 ARITHEMETIC TABLE**\n");
    printf("  ");
    for(int a=1;a<=9;a++)
    {
        printf("%4d",a);
    } 
    printf("\n!--------------------------!\n");
    for(int i=1;i<=9;i++)
    {
        printf("%d!", i);
        for(int j=1;j<=9;j++)
        {
            
            printf("%4d",i*j);
        }
        printf(" !\n");
    }
        printf("!--------------------------!\n");
    return;
}

int main()
{
    int item;
    char ans, ch[10];
    int i,j,s;
    float p,f,n1,n2,n;

    do
    {
        system("cls");
        printf(" 1.\n");
        
        printf(" 2.\n");
        printf(" 3.\n");
        printf(" 4.\n");
        printf(" 5.\n");
        printf(" 9.\n");
        printf("12.\n");

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

            printf("5~15的亂數取平均\n");
            randavg();

            break;

        case 3: 

            printf("請輸入兩數:\n");
            scanf("%f%f", &n1, &n2);
            printf("%f",two(n1,n2));

            break;

        case 4:

            n=1000;
            printf("1000之內的所有完美數\n");
            perfect(n);

            break;

        case 5:

            printf("輸入一個整數:");
            scanf("%f", &n);
            printf("%f\n",catalan(n));

            break;

        case 9:

            printf("中i代表行數，j代表個數，ch 代表要印出的宇元:");
            scanf("%d%d%s",&i,&j,&ch);
            printout(ch,i,j);

            break;

        case 12:

            printf("印出九九乘法\n");
            print99();

            break;
        }
        
        printf("play again?");
        ans=getch();
        printf("\n");
    } while (ans=='y'||ans=='Y');
    return 0;
}