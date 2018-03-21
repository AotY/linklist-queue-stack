/**
* author: Qing Tao
**/
#include "linklist.h"

/**
* size: 创建节点个数
**/
void LinkList::init(int size) {  
    if (size < 0) {  
        cout << "创建节点个数必须大于0。" << endl;  
        return;
    }  
    else {  
        Node *pnew, *tmpHead;  
        tmpHead = this->head;  
        int i = size;    
        while (size-- > 0) {  
            pnew = new Node();  
            cout << "输入第" << i - size << "个结点值：";  
            cin >> pnew->data;   
            pnew->pNext = NULL;  
            tmpHead->pNext = pnew;  
            tmpHead = pnew;     
        }  
    }  
}  


/**
* 在指定位置插入结点
**/
void LinkList::insert(int position, int data) {  
    if (position < 0 || position > this->length() + 1) {  
        cout << "插入位置错误。" << endl;  
        return;  
    }  
    else {  
        Node *pnew, *tmpHead;  
        tmpHead = this->head;  
        pnew = new Node();  
        pnew->data = data;  
        pnew->pNext = NULL;  
        // 找到要插入位置
        while (position-- > 1) {
            tmpHead = tmpHead->pNext;  
        }
        pnew->pNext = tmpHead->pNext; // 这一步很重要，先将新节点指向一下个节点。
        tmpHead->pNext = pnew;  
    }  
}  
  
/**
* 更新节点元素
**/
void LinkList::update(int position, int data) {  
    if (position < 0 || position > this->length() + 1) {  
        cout << "更新位置错误。" << endl;  
        return;
    }  
    else {  
        // 留给大家完成
    }  
}  


/**
* 判断线性表是否为空  
**/
bool LinkList::empty() {  
    if (this->head->pNext == NULL)  
        return true;  
    else  
        return false;  
}  
  
/**
* 线性表长度
**/
int LinkList::length() {  
    Node *tmp = this->head->pNext;  
    int length = 0;  
    while (tmp != NULL) {  
        length++;  
        tmp = tmp->pNext;  
    }  
    return length;  
}  

/**
* 遍历线性表
**/
void LinkList::traverse() {  
    Node *tmp = this->head->pNext; 
    while (tmp != NULL) {  
        cout << tmp->data << " ";
        tmp = tmp->pNext;  
    }  
    cout << endl;
}  

/**
* 删除指定位置元素
**/ 
void LinkList::remove(int position) {  
    if (position < 0 || position > this->length()) {  
        cout << "删除位置错误。" << endl;  
        return;
    }  
    else {        
        Node *tmpHead = this->head;
        Node *pdelete;  
        // 
        while (position-- > 1){
            tmpHead = tmpHead->pNext;  
        }
        pdelete = tmpHead->pNext;  
        tmpHead->pNext = pdelete->pNext; // 这一步重要
        delete pdelete;  
        pdelete = NULL;  
    }  
}  

/**
* 清空线性表元素 
**/  
void LinkList::clear() {  
    Node *pdelete = this->head->pNext;
    Node *tmpHead;
    while(pdelete != NULL) {  
        tmpHead = pdelete->pNext;  
        this->head->pNext = tmpHead;  
        delete pdelete;  // 删除节点
        pdelete = tmpHead;  
    }  
}  
