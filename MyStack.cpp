#include "MyStack.h"
#include "stdafx.h"
#include <iostream>
using namespace std;

MyStack::MyStack(int size)
{
    m_iSize = size;                 //����ջ����
    m_pBuffer = new char[size];     
    m_iTop = 0;
}
MyStack::~MyStack()
{
    delete[]m_pBuffer;              //�ͷ��ڴ�
    m_pBuffer = NULL;               
    
}

//�ж�ջ�Ƿ�Ϊ��
bool MyStack::stackEmpty()          
{
    if (m_iTop == 0)//if(0 == m_iTop) ����д��һ��=Ҳ�ᱨ��
    {
        return true;
    }
    else
    {
        return false;
    }
}

//����
bool MyStack::stackFull()
{
    if ( m_iTop == m_iSize)//д��>=���
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
    m_iTop = 0;//ԭջ������ֵ��Ч
}

int MyStack::stackLength()
{
    return m_iTop;
}


//����ջ��
bool MyStack::push(char elem)
{
    if (stackFull())        //���ջ�������ܼ�����ջ
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
    m_iTop--;//��Ϊ��ջʱ����++��ʹջ��ָ����һ����λ��
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
