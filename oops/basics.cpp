//class is a userdefined data type
#include<iostream>
using namespace std;
class hero
{
    public:
int health;
string name;
char level;
hero()
{
    cout<<"constructor called";
}
void setdetails()
{
    health=23;
    name="simran";
    level='a';
}
void getdetails()
{
    cout<<health<<endl<<level<<endl<<name;
}
};
int main()
{
hero h1;//static allocation 
h1.setdetails();
//for current object we will use this->h=h
h1.getdetails();
cout<<sizeof(hero);//give the size as per of paramter it holds and if empty for the significance/identification/track  we will have 1 as a size.
    //jab ek integer ho and ek char toh total 5 dega size because yha r padding bhi hoti hai along with datatype if 4+4 hota toh 8 dedeta but 4 and 1 mai vo 3 aur padding krega .
    //due to easy access of memory cpu have some alignment constraints 
    //dynamic allocation 
    //address of object and this keyword will be same 
    hero* h2=new hero;
    (*h2).setdetails();
    h2->getdetails();//better way to write this derefernecing operator with dot is arrow operaator 
    return 0;
}
//when we create the object the constructor is called automaticallly 
//properties of constructor:invoked at object creation,no return type,name of the constructor is same as name of cLASS
//we have parametrized and copy constructor 
//we will use this keyword for current instance of the class

