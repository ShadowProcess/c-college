// ConsoleApplication35.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

//结构体之间不能加减乘除  但可以相互赋值
struct Student{
	int age;
	char name[200];
	int sid;
};

int main(void)
{
    
	struct Student st = {1000,"zhangsan",20};

	struct Student * pst;
	pst = &st;
	pst->sid = 99; // pst ->sid 等价于 (*pst).sid 等价于st.sid

	return 0;
}

