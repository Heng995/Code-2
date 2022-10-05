#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<float.h>
int main()
{
    printf("無符號的資料型態的最大值：\n");
    printf("=======================\n");
    printf("unsigned char maximum value = %u(%d)\n",UCHAR_MAX,sizeof(char));
    printf("unsigned short maximum value = %u(%d)\n",UCHAR_MAX,sizeof(short));
    printf("unsigned int maximum value = %u(%d)\n",UCHAR_MAX,sizeof(int));
    printf("unsigned long maximum value = %lu(%d)\n",UCHAR_MAX,sizeof(long));
    printf("========================\n");

    printf("有符號的資料型態的最大值：\n");
    printf("========================\n");
    printf("signed char = %d ~ %d\n",SCHAR_MIN,SCHAR_MAX);
    printf("signed short = %d ~ %d\n",SHRT_MIN,SHRT_MAX);
    printf("signed int = %d ~ %d\n",INT_MIN,INT_MAX);
    printf("signed long = %ld ~ %ld\n",LONG_MIN,LONG_MAX);
    printf("========================\n");

    printf("float = %e ~ %e(%d)\n", FLT_MIN, FLT_MAX,sizeof(float));
    printf("double = %e ~ %e(%d)\n", DBL_MIN, DBL_MAX, sizeof(double));

    system("PAUSE");
    return 0;
}





