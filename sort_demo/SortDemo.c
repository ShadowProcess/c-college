//
// Created by Alex on 2019/11/29.
//

// 排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

void QuickSort(int* a, int low, int high);
int FindPos(int* a, int low, int high);

int main(void)
{

    printf("我乱码\n");
    int a[6] = {2,1,0,5,4,3};

    QuickSort(a,0,5); //第二个参数表示第一个元素的下标 第三个元素表示最后一个元素的下标


    for (int i = 0; i < 6;++i) {

        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}

int FindPos(int * a,int low,int high) {
    int val = a[low];

    while (low < high) {

        while (low<high && a[high]>=val) {
            --high;
        }
        a[low] = a[high];

        while (low < high && a[low <= val]) {
            ++low;
        }
        a[high] = a[low];
    } //终止while循环之后  low和high一定相等的

    a[low] = val;

    return high; //high可以改为low
}


void QuickSort(int * a,int low,int high) {
    int pos;

    if (low < high) {
        pos = FindPos(a,low,high);
        QuickSort(a,low,pos-1);
        QuickSort(a, pos + 1, high);
    }
}


