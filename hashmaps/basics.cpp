//used in most of the company due to less time complexity
//type of data structure 
//map<int,int<m;
//takes constant time for insertion,deletion,searching etc
//this can be implenatted using hash tables whichh will take constant time 
//ordered map takes O(logn) time and unordered map takes O(1) time.
#include<iostream>
using namespace std;
#include<map>
#include<unordered_map>
int main()
{
    unordered_map<string,int>m;
    //insertion 
    //1.
    pair<string,int>p=make_pair("simran",1);
    m.insert(p);
    //2.
    pair<string,int>p2("vandana",2);
    m.insert(p2);
    //3.
    m["batar"]=3;
    //searching 
    //1.
    cout<<m["batar"]<<endl;
    //2.
    cout<<m.at("simran");
    //cout<<m.at("si");//this will gove error
    cout<<m["si"];//this will not give error ,this will make new entry for si
   //we can check size of the map using 
   cout<< m.size();
   //to check whether an element is present or not 
   cout<<m.count("simran");//return 1 if present otherwise 0
   m.erase("batar");
   cout<<m.size();

   //traversing of the map
   //1.
//    for(auto i:m)
//    {
//     cout<<i.first<<" "<<i.second;
//    }
   //2. using iterator 
   unordered_map<string,int>:: iterator itr=m.begin();
   while(itr!=m.end())
   {
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
    itr++;
   }


    return 0;
}