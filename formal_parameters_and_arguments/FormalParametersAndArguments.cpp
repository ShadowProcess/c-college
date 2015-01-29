// formal_parameters_and_arguments.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

/***
	形参和实参:
	  个数要相同，位置要一一对应，数据类型要相互兼容
***/

#include <stdio.h>


void f(int i) {    // i是一个形参

	printf("%d\n",i);
}


int main(void)
{
	f(5);		// 5是一个实参

	return 0;
}


