#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
int f(int n)
{
    if(n==1||n==2)
        return 1;
    else
        return(f(n-1)+f(n-2));

}
//i*...*n=total
int fac(int n)
{
    int i, total=1;
    for(i=1;i<=n;i++)
    {
        total*=i;
    }
    return total;
}
//三數平均
void average_3()
{
    int x, y, z;

    printf("input x,y,z:");
    scanf("%d%d%d", &x, &y, &z);
    printf("average=:%f", (x+y+z)/3.0);

}
void prime_f(int n)
{
    int i,j;
    int flag, line=0;

    printf("1-%d的質數如下\n\n", n);
    for(i=2;i<n;i++)
    {
        flag=0;
        for (j=2;j<i;j++)
        {
            if(i%j==0)
                flag=1;
        }
        if(flag==0)
        {
            printf("%3d", i);
        }
    }
    getch();
    return;
}

void prime_f2(int n)
{
    int j, flag;
    for(j=2;j<n;j++)
    {
        if(n%j==0)
            flag=1;
    }
    if(flag==0)
        printf("%3d 是質數",n);
    else
        printf("%3d 不是質數",n);
}

int main()
{
    int item;
    char ans;
    int i,n;

    do
    {
        system("CLS");

        printf("1.費事數列\n");
        printf("2.fac\n");
        printf("3.average_3\n");
        printf("4.1-%%d的質數\n");
        printf("5.輸入的數是否為質數\n");

        printf("\nselect item:");
        scanf("%d", &item);

        switch (item)
        {
        case 1:

            printf("int n=:");
            scanf("%d", &n);
            for(i=1;i<=n;i++)
            {
                printf("%3d ", f(i));
            }
            printf("\n");

            break;

        case 2: 

            printf("input n:");
            scanf("%d", &n);
            printf("total=%d\n", fac(n));

            break;

        case 3: 

            average_3();

            break;
        case 4:

            printf("請輸入整數：");
            scanf("%d", &n);
            prime_f(n);

            break;
        
        case 5:
            
            printf("請輸入整數：");
            scanf("%d", &n);
            prime_f2(n);
            break;
        }
        printf("play again?");
        ans=getch();
        printf("\n");
    } while (ans=='y'||ans=='Y');
    return 0;
}