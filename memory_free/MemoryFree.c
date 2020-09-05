//
// Created by Alex on 2020/9/5.
//
#include <stdio.h>
int main(){

    MibBridge *pBridge = new cmBaseGroupBridge();

    //如果注册失败，使用delete释放该对象所占的内存区域
    if (pBridge->Register(kDestory) != NO_ERROR)
        delete pBridge;

    return 0;
}
