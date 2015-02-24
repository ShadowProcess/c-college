// point.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <stdio.h>

int main(void)
{
    int * p;    //p是指针变量 int * 表示该p变量只能存储int类型变量的地址
    int i = 10;
    int j;

    p = &i;
    j = *p;

    printf("i = %d j = %d",i,j);

    return 0;

}


