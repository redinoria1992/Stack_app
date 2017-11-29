// MyStack_app.cpp: 主项目文件。

#include "stdafx.h"
#include <iostream>
#include "MyStack.h"
#include <stdlib.h>
using namespace std;

int main(void)
{
    MyStack *pStack = new MyStack(5);

    pStack->push('h');//底
    pStack->push('e');
    pStack->push('l');
    pStack->push('l');
    pStack->push('o');//顶

    pStack->stackTraverse(true);
    char elem = 0;
    pStack->pop(elem);

    cout << endl;
    cout << elem << endl;

    //pStack->clearStack();
    pStack->stackTraverse(false);

    cout << pStack->stackLength() << endl;
    if (pStack->stackEmpty())
    {
        cout << "栈为空" << endl;
    }
    if (pStack->stackFull())
    {
        cout << "栈为满" << endl;
    }



    delete pStack;
    pStack = NULL;
    system("pause");
    return 0;
}

