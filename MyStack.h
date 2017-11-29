#ifndef MYSTACK_H
#define MYSTACK_H
class MyStack
{
public:
    MyStack(int size);      //�����ڴ��ʼ��ջ�ռ䣬�趨ջ������ջ��
    ~MyStack();             //����ջ�ռ��ڴ�
    bool stackEmpty();      //�ж�ջ�Ƿ�Ϊ��
    bool stackFull();       //�ж�ջ�Ƿ�Ϊ��
    void clearStack();      //���ջ
    int stackLength();      //ջ��Ԫ�صĸ���
    bool push(char elem);   //��Ԫ��ѹ��ջ�У�ջ������
    bool pop(char &elem);   //��Ԫ���Ƴ�ջ��ջ���½�
    void stackTraverse(bool isFromButtom);  //����ջ��Ԫ�ز����
private:
    int m_iTop;             //ջ����ջ��Ԫ�ظ���
    int m_iSize;            //ջ����
    char *m_pBuffer;        //ջ�ռ�ָ��
};


#endif
