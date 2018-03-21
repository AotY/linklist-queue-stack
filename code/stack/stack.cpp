/**
* author: Qing Tao
**/

#include"stack.h"  

//构造函数，初始化栈的实现  
Stack::Stack()  
{  
   this->top=-1; //初始化top位置
   // this->stack[MAXSIZE]=0;  
}  

/**
* 初始化栈中元素
**/
void Stack::init(int size) {  
    if (size < 0) {  
        cout << "创建元素个数必须大于0。" << endl;  
        return;
    }  
    else {
        int i = size;    
        while (size-- > 0) {  
          if(this->top < MAXSIZE-1)  
          {  
            this->top++;
            cout << "输入第" << i - size << "个元素值：";  
            cin >> this->stack[this->top];
          }  
        }  
    }
}

//入栈
void Stack::push(int data)  
{  
   if(this->top==MAXSIZE-1)  
   {  
      cout << "栈已满。" << endl;  
      return ;  
   }  
   this->top++;
   this->stack[this->top] = data;
}  
  
//出栈  
int Stack::pop()  
{  
   if(-1 == this->top)  
   {  
     cout<< "栈已空。" << endl;  
     return 0;  
   }   
  int data = this->stack[this->top];
  this->stack[this->top] = 0; // 设为指定的标记值
  this->top--;
  return data;  
}  
  
//显示栈中数据的函数的实现  
void Stack::show()  
{  
  
  if(-1 == this->top)  
   {  
     cout<< "栈已空。" << endl;  
     return ;  
   }

   int len = this->top;
  for(int i = len; i >= 0; i--)  
  {  
    cout << this->stack[i] <<' ';  
     
  }  
  cout << endl;  
}  

/**
* 其他方法留给大家实现。
**/



