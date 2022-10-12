#include<stdio.h>
#include<stdlib.h>
int main()
{
    int age;
    printf("Please enter age:");
    scanf("%d", &age);
    if(age<13)
        printf("child\n");
    else if(age<20)
        printf("teenager\n");
    else if(age>=20&&age<65)
        printf("adults\n");
    else
        printf("elderly\n");
    
    return 0;
}