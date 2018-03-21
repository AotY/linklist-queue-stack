/**
* author: Qing Tao
**/
#include"queue.h"  
/**
* g++编译命令： g++ main.cpp queue.cpp -o main.out
* 运行: ./main.out
**/
int main()  
{  

  Queue queue;

  // 初始化元素1 2 4
  cout << "初始化元素1 2 4" << endl;
  int size = 3;
  queue.init(3);
  queue.traverse();

  // 入栈
  cout << "将元素3入队" << endl;
  int data = 3;
  queue.push(data);
  queue.traverse();

  //出栈
  cout << "将队首元素1出队" << endl;
  queue.pop();
  queue.traverse();
  
  return 0;
}  