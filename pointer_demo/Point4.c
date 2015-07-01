//互换两个数字

#include <stdio.h>
void huhuan1(int a,int b) {  //这个函数不能完成互换功能
    int t;

    t = a;
    a = b;
    b = t;
    return;
}


void huhuan2(int * p,int * q) { //这个函数不能互换
    int * t;

    t = p;
    p = q;
    q = t;
}

void huhuan3(int * p,int * q) { //可以互换主函数a,b的值
    int t;
    t = *p;
    *p = *q;
    *q = t;
}



int main(void)
{
    int a = 3;
    int b = 5;

    //huhuan1(a,b);  // 不能完成互换

    huhuan2(&a,&b); // 不能完成互换

    printf("a = %d,b = %d \n",a,b);

    return 0;
}