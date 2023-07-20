#include<iostream>
#include<deque>
using namespace std;
int main()
{
deque<int>d;
d.push_front(12);
d.push_front(11);
d.push_back(123);
d.push_back(45);
cout<<d.front()<<endl;
cout<<d.back()<<endl;
d.pop_front();
cout<<d.front()<<endl;
d.pop_back();
cout<<d.back()<<endl;
if(d.empty())
{
    cout<<"true";
}
else{
    cout<<"false";
}
    return 0;
}
//implemneation of dequeue is left learn about it 