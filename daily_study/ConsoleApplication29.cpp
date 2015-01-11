// ConsoleApplication29.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>


void g(int * p,int * q) {

	*p = 1;
	*q = 2;
}

int main(void)
{
  
	int a = 3, b = 5;
	g(&a,&b);
	printf("i=%d,b=%d",a,b);

	return 0;
}

