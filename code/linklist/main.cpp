/**
* author: Qing Tao
**/
#include "linklist.h"
/**
* g++编译命令： g++ main.cpp linklist.cpp -o main.out
* 运行: ./main.out
**/
int main() {  
    LinkList list;  
    
    cout << "初始化元素1 2 4" << endl;
    // 创建线性表 (输入元素 1 2 4)
    int curSize = 3;
    list.init(curSize);
    list.traverse();

    // 插入元素3
    cout << "将元素3插入到第三个位置" << endl;
    int data = 3;
    int position = 3;
    list.insert(3, data);
    list.traverse();

    // 删除元素
    cout << "删除第二个位置元素" << endl;
    position = 2;
    list.remove(position);
    list.traverse();

    return 0;  
}
