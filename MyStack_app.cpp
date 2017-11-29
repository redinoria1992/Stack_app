// MyStack_app.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#include <iostream>
#include "MyStack.h"
#include <stdlib.h>
using namespace std;

int main(void)
{
    MyStack *pStack = new MyStack(5);

    pStack->push('h');//��
    pStack->push('e');
    pStack->push('l');
    pStack->push('l');
    pStack->push('o');//��

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
        cout << "ջΪ��" << endl;
    }
    if (pStack->stackFull())
    {
        cout << "ջΪ��" << endl;
    }



    delete pStack;
    pStack = NULL;
    system("pause");
    return 0;
}

