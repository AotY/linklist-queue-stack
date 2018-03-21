/**
* author: Qing Tao
**/
#include <stdlib.h> 
#include <iostream>
using namespace std;  
  
//结点类  
class Node {  
public:  
    int data;  // 节点数据元素
    Node *pNext;  // 指向下一个元素指针
};  
  
//单向链表类  
class LinkList {  
public:  
    LinkList() {  							// 构造方法
        //头结点 
        head = new Node();
        head->pNext = NULL;  
    }  
    ~LinkList() { delete head; }  			//销毁线性表
    void init(int size);             		//创建线性表 
    void insert(int position, int data);   	//在指定位置插入结点  
    void remove(int position);   			//删除指定位置元素 
    void update(int position, int data);    //更新节点元素
    bool empty();                         	//判断线性表是否为空  
    int length();                        	//线性表长度
    void clear();                  			//清空线性表元素
    void traverse();						//遍历线性表
private:  
    Node *head;  
};