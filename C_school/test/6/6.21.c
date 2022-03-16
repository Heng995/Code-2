#include <stdio.h>
int main (void)
{
    char ab;
    scanf("%c", &ab);

    switch (ab)
    {
    case 'a':
        printf("\"您輸入a\"\n");
        break;
    case 'b':
        printf("\"您輸入b\"\n");
        break;
    default:
        printf("\"您輸入的不是a或b\"\n");
        break;
    }
    return 0;
}