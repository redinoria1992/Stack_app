#include "MyStack.h"
#include "stdafx.h"
#include <iostream>
using namespace std;

MyStack::MyStack(int size)
{
    m_iSize = size;                 //定义栈容量
    m_pBuffer = new char[size];     
    m_iTop = 0;
}
MyStack::~MyStack()
{
    delete[]m_pBuffer;              //释放内存
    m_pBuffer = NULL;               
    
}

//判断栈是否为空
bool MyStack::stackEmpty()          
{
    if (m_iTop == 0)//if(0 == m_iTop) 这样写成一个=也会报错
    {
        return true;
    }
    else
    {
        return false;
    }
}

//判满
bool MyStack::stackFull()
{
    if ( m_iTop == m_iSize)//写成>=亦可
    {
        return true;
    }
    else
    {
        return false;
    }
}

void MyStack::clearStack()
{
    m_iTop = 0;//原栈中所有值无效
}

int MyStack::stackLength()
{
    return m_iTop;
}


//放入栈顶
bool MyStack::push(char elem)
{
    if (stackFull())        //如果栈满，则不能继续入栈
    {
        return false;
    }
    m_pBuffer[m_iTop] = elem;
    m_iTop++;
    return true;
}
bool MyStack::pop(char &elem)
{
    if (stackEmpty())        
    {
        return false;
    }
    m_iTop--;//因为入栈时做了++，使栈顶指向下一个空位置
    elem = m_pBuffer[m_iTop];
    return true;
}

//char MyStack::pop()
//{
//  if (stackEmpty())
//  {
//      throw 1;
//  }
//  else
//  {
//      m_iTop--;
//      return m_pBuffer[m_iTop];
//  }
//}

void MyStack::stackTraverse(bool isFromButtom)
{
    if (isFromButtom)
    {
        for (int i = 0; i < m_iTop; i++)
        {
            cout << m_pBuffer[i] << ",";
        }
    }
    else
    {
        for (int i = m_iTop - 1; i >= 0; i--)
        {
            cout << m_pBuffer[i] << ",";
        }
    }
    
}
