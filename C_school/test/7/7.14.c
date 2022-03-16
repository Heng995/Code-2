#include <stdio.h>
int main (void)
{
    int day = 0;
    double rope = 3000.0;
    printf("一條繩子有3000公尺每天減去一半，幾天後會剪完?\n");
    while (1)
    {
        rope = rope/2.0;
        day++;
        if(rope<5)
            break;
    }
    printf("第%d天\n",day);
    return 0;
}