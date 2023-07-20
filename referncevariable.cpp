//same memory but different names hai uske 
#include<iostream>
using namespace std;
int main()
{
    int i=90;
    int &j=i;//refernce variable j
    cout<<j<<endl;
    cout<<"adress of i and j is "<<&i<<endl<<&j<<endl;
    return 0;
}
//use of refernce varaible is we can pass the refernce in the function so that when we provide the value 
//of refernce varaible in the function it will also update the actual dta itm.
//there is one problem that can occur if we return the refernce varible in the function 
//bcooz the value that is return will be local variabl e as well associlated within the function ab memory access hi na kar paao
//one more thing we should know the value of size of array at compile time only ,if it runs at runtimee this will be bad practice 
//int arr[n]; cin>>n this is not good 
//because when program strts it takes some meoery with itself one is stack and other is heap ,if we want memory forr stack it dppends oon our requirements but if we do not mention the size it will lead to problem for further processing and overflow of stack 
//if we want to get dynamically allocation of memeory then we will use heap memory 
