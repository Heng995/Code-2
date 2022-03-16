#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i=1,k=1;
    do
    {
        int j=1;
        do
        {   
            
            printf(" %d * %d = %2d, ", i, j, i*j);
            j++;
        } while (j<=9);
        i++;
        printf("\n");
        
    } while (i<=9);
    
    system("pause");
    return 0;
}