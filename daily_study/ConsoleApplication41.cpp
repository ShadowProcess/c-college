// ConsoleApplication41.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

typedef int ZHANGSAN; //为int再重新多取一个名字， ZHANGSAN 等价于int

struct Student {
	int sid;
	char name[100];
	char sex;
};

int main(void)
{
	ZHANGSAN i = 20;
	struct Student st;
	struct Student * ps = &st;

	return 0;
}


