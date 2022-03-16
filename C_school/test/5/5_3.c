#include <stdio.h>
int main (void)
{
    int w,h;
    for(int i=1;i<=2;i++)
    {
        printf("Input the weight : ");
        scanf("%d", &w);
        printf("Input the height : ");
        scanf("%d", &h);
        
        if(w>90|| h>180)
        {
            printf("Overweight\n");
        }
        else
        {
            printf("Not overweight\n");
        }
        printf("\n");
    }
    return 0;
}