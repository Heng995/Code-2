#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
int main()
{
    int item;
    char ans;
    int i, n;
    do
    {

        printf("1.費事數列\n");
        printf("2.fac\n");
        printf("3.average_3\n");
        printf("4.1-%%d的值數\n");

        printf("\nselect item:");
        scanf("%d", &item);

        switch (item)
        {
        case 1:

            printf("int n=:");
            scanf("%d", &n);
            for(i=1;i<=n;i++)
            {
                printf("%3d ", i);
            }
            printf("\n");

            break;

        case 2: 

            printf("input n:");
            scanf("%d", &n);
            printf("total=%d\n", n);

            break;

        case 3: 



            break;
        case 4:

            printf("請輸入整數：");
            scanf("%d", &n);

            break;
        
        }

    } while (ans=='y'||ans=='Y');
    return 0;
}