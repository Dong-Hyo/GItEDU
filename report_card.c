#include<stdio.h>

int main()
{
    int kor, eng, math,ch;
    int sum = 0;

    math = 80;
    eng = 100;
    kor = 90;
    ch = 30;
    sum = 80 + 100 + 90+ch;
    
    printf("This program print report card.\n");
    printf("stage 3\n");
    printf("Korean : %d\n", kor);
    printf("English : %d\n", eng);
    printf("Math : %d\n", math);
    printf("Sum : %d\n", sum);
    printf("ch : %d\n",ch);
    printf("AverageT : %d\n", sum/4);
    return 0;
}
