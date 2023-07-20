#include<iostream>
using namespace std;
class A
{
    public:
    
    A()
    {
        cout<<"constructor called";

    }
    int age;
    void getage(int age)
    {
        this->age=age;
    }
    // A(A &temp)
    // {
    //     this->age=temp.age;
    // }//this is the  actual copy constructor and tis is the shallow copy constructor 
    void print()
    {
        cout<<age;
    }

};
int main()
{ 
    A h1;
    h1.getage(12);
    h1.print();
    A h2(h1);//copy the h1 object to h2
    //A h2=h1;
    h2.print();
//defult copy cconstrctor shallow copy krta hai isme copy krne ke baad agr ek mai change oga toh dusre mai bhi apne aap hojaagega 
    return  0;
}
//learn more about deep and shallow copy constructor 