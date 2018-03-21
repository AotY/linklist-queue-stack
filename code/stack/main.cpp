/**
  author: Qing Tao
**/
#include"stack.h"  
/**
* g++编译命令： g++ main.cpp stack.cpp -o main.out
* 运行: ./main.out
**/
int main()  
{  

  Stack stack;

  // 初始化元素1 2 4
  cout << "初始化元素1 2 4" << endl;
  int size = 3;
  stack.init(3);
  stack.show();

  // 入栈
  cout << "将元素3入栈" << endl;
  int data = 3;
  stack.push(data);
  stack.show();

  //出栈
  cout << "将栈顶元素出栈" << endl;
  stack.pop();
  stack.show();
  
  return 0;
}  