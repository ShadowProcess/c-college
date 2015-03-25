// return_break.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
/**
	break 
		1.是用来终止循环和switch的
	
	return
		1.用来终止函数的,向主调函数返回表达式的值 
		2.如果表达式为空，则只终止函数，不向被调函数返回任何值
**/

void f(void) {
	int i;
	for (i = 0; i < 5;++i) {
		printf("大家辛苦了\n");
		break;
	}
	printf("同之门好!\n");
}

#include <iostream>

int main(void)
{
	f();

	return 0;
}

