#include <stdio.h>
int main (void)
{ 
    int count=0;
    do{
        int i=1, n;
        printf("n = ");
        scanf("%d", &n);
        
        do
        {
            printf("* ");
            i++;
        }while (i <= n);
        printf("\n");
                
        count ++;
    }while (count < 3);
    return 0;
}