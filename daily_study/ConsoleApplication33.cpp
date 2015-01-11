// ConsoleApplication33.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

void f(int ** q) {

	*q = (int *)0XFFFFFFFF;
}


int main(void)
{

	int i = 9;
	int * p = &i;

	printf("%p\n",p);
	f(&p);
	printf("%p\n",p);

	return 0;
}


/***
	int * p;

	p + i  ==> p + i*(变量所占字节数)
	p - i  ==> p - i*(变量所占字节数)
**/
