#include <iostream>
#define Max_Size 100

int stack[Max_Size];
int top_index = -1;

void push(int val){
  if(top_index == Max_Size - 1){
    std::cout<<"Stack Overflow"<<std::endl;
    return;
  }
  top_index++;
  stack[top_index] = val;
  std::cout<<val<<" has been pushed to the stack"<<std::endl;
}

void pop(){
  if(top_index == -1){
    std::cout<<" Stack Underflow"<<std::endl;
    return;
  }
  top_index--;
}

void top(){
  if(top_index==-1){
    std::cout<<"Empty Stack."<<std::endl;
    return;
  }
  std::cout<<"Top element is: "<<stack[top_index] <<std::endl;
}

bool isEmpty(){
  return (top_index == -1);
}

void Display(){
  std::cout<<"The Elements are: ";
  for(int i=0;i<=top_index;i++){
    std::cout<<stack[i]<<" ";
  }
  std::cout<<std::endl;    
}

int main(){
  int choice, val;
  while(true){
    std::cout<<"1.Push 2.Pop 3.Top 4.Display 5.Exit "<<std::endl;
    std::cout << "Enter your choice: ";
    std::cin>>choice;
    switch (choice) {
      case 1:
        std::cout<<"Enter a value to push: "<<std::endl;
        std::cin>>val;
        push(val);
        break;
      case 2:
        pop();
        break;
      case 3:
        top(); 
        break;
      case 4:
        Display();
        break;
      case 5:
        return 0;
        break;
      default:
        std::cout<<"Invalid choice"<<std::endl;
        break;
    }
  }
  return 0;
}
