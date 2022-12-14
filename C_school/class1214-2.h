#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
#define NTD 1.0
#define USD 0.032
#define JPY 4.49
#define HKD 0.25
#define GBP 0.027
#define EUR 0.031
#define EXCHANGE(currency1, currency2) (NTD/currency1)*currency2
#define OUTPUT(x)  switch(x)\
                {\
                    case1 :printf("(NTD)\t");\
                        break;\
                    case 2:printf("(USD)\t");\
                        break;\
                    case 3:printf("(JPY)\t");\
                        break;\
                    case 4:printf("(HKD)\t");\
                        break;\
                    case 5:printf("(GBP)\t");\
                        break;\
                    case 6:printf("(EUR)\t");\
                        break;\
                }