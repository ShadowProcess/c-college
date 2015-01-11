// ConsoleApplication37.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int f() {
	int j = 20;
	return j;
}

void g() {

}

int main(void)
{
	int i = 10;

	i = f();

	printf("i = %d\n",i);


	return 0;
}


