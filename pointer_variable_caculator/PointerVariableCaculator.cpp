// pointer_variable_caculator.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main(void)
{
	int a[5];
	int * p;
	int * q;


	p = &a[1];

	q = &a[4];

	printf("两个元素相隔的单元: %d", q - p);

	return 0;
}


