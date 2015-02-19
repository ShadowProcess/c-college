// modify_the_value_of_a_variable_by_pointer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>

void f(int * p) {
	*p = 6;
}

int main(void)
{
	int i = 5;
	f(&i);
	printf("%d",i);

	return 0;
}


