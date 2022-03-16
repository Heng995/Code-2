#include <stdio.h>
#include <stdlib.h>
void star(void);
int main (void)
{
    star();
    printf("welcome!\n");
    star();
    system("pause");
    return 0;
}
void star(void)
{
    printf("********\n");
    return;
}