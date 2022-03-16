//第一行是數列的數目t（0 <= t <= 20）。 
//以下每行均包含四個整數，表示數列的前四項。 
//約定數列的前五項均為不大於105的自然數，等比數列的比值也是自然數。
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i=1;n>=i;i++)
    {
        int a1,a2,a3,a4,a5;
        scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
        if((a2-a1)==(a4-a3))
        {
            a5 = a4+(a4-a3);
        }
        if((a2/a1)==(a4/a3))
        {
            a5 = a4*(a4/a3);
        }
        printf("%d %d %d %d %d\n",a1,a2,a3,a4,a5);
        
        
    }
    
    
}