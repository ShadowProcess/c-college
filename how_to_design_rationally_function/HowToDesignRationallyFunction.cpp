// how_to_design_rationally_function.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

/***
		

***/

#include <stdio.h>

int main(void)
{
	int val;
	int i;

	scanf_s("%d",&val);

	for (i = 2; i < val;++i) {
		if (0 == val % i) {
			break;
		}
	}


	if (i == val){
		printf("是质数!");
	}
	else {
		printf("不是质数!");
	}


	return 0;
}

