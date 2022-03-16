#include <stdio.h>

int main(void)
{
    int a = 15;
    
    printf("a = %d\n", a);
    printf("以浮點數型態印出： %2.2f\n", (float)a);
    printf("以指數型態印出： %2.2e\n", (double)a);
    
    return 0;
}
