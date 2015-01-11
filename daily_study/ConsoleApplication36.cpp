// ConsoleApplication36.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

struct Student {
	int sid;
	char name[100];
	int age;
};

//形参指针类型
void f(struct Student * pSt) {

}

void g(struct Student st) {

}

int main(void)
{
	struct Student st; //已经为st分配了内存

	f(&st);
	g(st);

	return 0;
}

