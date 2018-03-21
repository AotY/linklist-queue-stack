/**
* author: Qing Tao
**/
#include "queue.h"

/**
* size: 创建节点个数
**/
void Queue::init(int size) {  
    if (size < 0) {  
        cout << "创建节点个数必须大于0。" << endl;  
        return;
    }  
    else {
        int i = size;    
        while (size-- > 0) {  
            Node *pnew = new Node();  
            cout << "输入第" << i - size << "个结点值：";  
            cin >> pnew->data;
            pnew->pNext = NULL;
            this->rear->pNext = pnew;
            this->rear = pnew;  
        }  
    }  
}  


/**
* 入队
**/ 
void Queue::push(int data) {
    Node *pnew = new Node();  
    pnew->data = data;
    pnew->pNext = NULL;

    this->rear->pNext = pnew;
    this->rear = pnew;  
}  


/**
* 出队
**/ 
int Queue::pop() {  
    if (this->front == this->rear) {  
        cout << "队列为空。" << endl;  
        return 0;
    }  
    else {        
        int data = this->front->pNext->data;
        this->front->pNext = this->front->pNext->pNext;
        return data;
    }  
}  

/**
* 判断队列是否为空  
**/
bool Queue::empty() {  
    if (this->front == this->rear)  
        return true;  
    else  
        return false;  
}  
  
/**
* 队列长度
**/
int Queue::length() {  
    Node *tmp = this->front;  
    int length = 0;  
    while (tmp != this->rear) {  
        tmp = tmp->pNext;
        length++;
    }  
    return length;  
}  

/**
* 遍历线性表
**/
void Queue::traverse() {  
    Node *tmp = this->front;  
    while (tmp != this->rear) {  
        tmp = tmp->pNext;
        cout << tmp->data << " ";
    }  
    cout << endl;
}  

/**
* 其他方法留给大家实现
**/