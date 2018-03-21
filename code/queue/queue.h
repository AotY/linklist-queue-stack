/**
* author: Qing Tao
**/

#include<iostream>
using namespace std;

//结点类  
class Node {  
public:  
    int data;  // 节点数据元素
    Node *pNext;  // 指向下一个元素指针
};  
  
//队列类  
class Queue {  
public:  
    Queue() {  								// 构造方法
        //头结点 
        head = new Node();
        head->pNext = NULL;  
        this->front = head;
        this->rear = head;
    }  
    ~Queue() {}  				            //销毁队列
    void init(int size);             		//创建队列
    void push(int data);   					//将元素从队尾入队
    int pop();   							//将队首元素出队 
    bool empty();                         	//判断队列是否为空  
    int length();                        	//队列长度
    void clear();                  			//清空队列元素
    void traverse();						//遍历队列
private:  
    Node *front; 
    Node *rear; 
    Node *head;
};