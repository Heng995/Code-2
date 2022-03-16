#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    char ch;
    while (ch != 81)
    {
        ch = getch();
        printf("ASCII of ch = %d\n", ch);
    }
    printf("shift + q\n");
    
    system("pause");
    return 0;
}

