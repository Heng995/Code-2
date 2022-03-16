#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i=1, pwd;
    while (i<=3)
    {
        printf("Into Password:");
        scanf("%d", &pwd);
        if(pwd == 1234)
        {
            printf("Welcome!\n");
            break;
        }
        
        i++;
        if(i>3)
            printf("over 3 time!\n");

    }
    
    system("pause");
    return 0;
}