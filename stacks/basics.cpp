//it follows lifo 
#include<iostream>
using namespace std;
class Stack
{
public:
int *arr;
int size;
int top;
Stack(int size)
{
    this->size=size;
    arr=new int[size];
    top=-1;
}
void push(int element)
{
    if(size -top<=1)
    {
        cout<<"overflow";
    }
    else
    {
    top++;
    arr[top]=element;
}
}
void pop()
{
    if(top>=0)
    {
        top--;
    }
    else{
        cout<<"underflow";
    }
}
int peek()
{
    if(top>= 0)
    {
        return arr[top];
    }
    cout<<"stack is empty";
}
bool isempty()
{
    if(top==-1)
    {
        return true;
    }
    else{
        return false;
    }
}

};
int main()
{
    Stack s(4);
    s.push(23);
    s.push(11);
    s.push(24);
    s.push(66);
    while(!s.isempty())
    {
        cout<<s.peek()<<endl;
s.pop();
    }
    return 0;
}