/**
* author: Qing Tao
**/
#include <iostream>  
using namespace std;  
  
const int MAXSIZE=100; 		// 默认初始化栈大小  
  
class Stack  
{  
private:  
    int stack[MAXSIZE];			//数组用于存放栈中数据  
    int top;       			//栈顶位置（数组的下标）  
  
public:  
    Stack();
    ~Stack() { top = -1; };
    void init(int size); 	//初始化栈中的一些元素
    bool empty();       	//判断栈是否为空
    void push(int data); 	//将元素入栈  
    int  pop();       		//将栈顶元素出栈  
    void clear(); 			//清除栈中元素  
  	int length();			//栈长度
  	void show();			//遍历栈元素
};