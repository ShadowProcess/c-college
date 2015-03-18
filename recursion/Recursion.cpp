// recursion.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int f(int n) {
	n += 2;
	return n;
}



int main(void)
{
	int val;
	val = f(5);
	printf("val = %d\n",val);

	return 0;
}


