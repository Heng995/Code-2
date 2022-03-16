#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char name[3];
    
    printf("What's your name:");
    scanf("%s", name);
    printf("Hi, %s, How are you?\n",name);
    
    system("pause");
    return 0;
}
