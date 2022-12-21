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
int fac(int n)
{
    int i, total=1;
    for(i=1;i<=n;i++)
    {
        total*=i;
    }
    return total;
}
void average_3()
{
    int x, y, z;

    printf("input x,y,z:");
    scanf("%d%d%d", &x, &y, &z);
    printf("average=:%f", (x+y+z)/3.0);

}
int main()
{
    int item;
    char ans;
    int i,n;

    do
    {
        system("cls");

        printf("1.費事數列\n");
        printf("2.fac\n");
        printf("3.average_3\n");

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
        }
        printf("play again?");
        ans=getch();
        printf("\n");
    } while (ans=='y'||ans=='Y');
    return 0;
}