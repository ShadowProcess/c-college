#include <stdio.h>

int f(void) {  //括号中的void表示该函数不能接受数据 int表示函数返回值为int
    return 10;
}


void g(void) { //函数名前面void表示该函数没有返回值，，括号中的void表示函数不能接受数据
}


int main(void) //括号中的void表示该函数不能接受数据
{
    int j = 88;

    j = f();

    printf("%d\n", j);

    return 0;
}

