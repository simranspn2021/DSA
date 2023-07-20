#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    //stl array 
    //int arr[3]={1,2,34};
    // array<int,4>a={2,3,4,0};
    // cout<<a.size();
    // for(int i=0;i<a.size();i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    // cout<<a.at(2);
    // cout<<"first elemnt"<<a.front()<<endl;
    // cout<<"last elemnt "<<a.back()<<endl;
    //stl vector-dynamic array ,it double the array wen it  is full and  decompose the old one 
    // vector<int>vec;
    // cout<<vec.size();
    // cout<<vec.capacity();
    // vec.push_back(1);
    // cout<<vec.capacity();
    // vec.push_back(3);
    // vec.push_back(9);
    // cout<<vec.capacity();//ab capacity bhad jaaygei bcoz ab capacity double ho jaayegi 
    // cout<<vec.at(2);
    // cout<<vec.front()<<endl<<vec.back()<<endl;
    //we can print the elemnts of vector  using 
    // for(int i:vec)
    // {
    //     cout<<i<<endl;
    // }
    // for(auto itr:vec)
    // {
    //     cout<<itr<<endl;
    // }
    // for(auto itr=vec.begin();itr!=vec.end();itr++)
    // {
    //     cout<<*itr<<endl;
    // }
    // cout<<"before clearing"<<endl;
    // cout<<vec.size();
    // cout<<vec.capacity();
    // vec.clear();
    // cout<<"after clearing"<<endl;
    // cout<<vec.size();
    // cout<<vec.capacity();//capcaity will not change even after deleting of elemnts from the vector 
    // //we can also create and initilaze te vector using::
    // vector<int>c(4,2);
    // for (auto i:c)
    // {
    //     cout<<i<<endl;
    // }    
    // //dequeue
    // deque<int>d;
    // d.push_back(90);
    // d.push_back(11);
    // d.push_back(22);
    // for(auto i:d)
    // {
    //     cout<<i<<endl;
    // }
    //d.size();
    //d.max_size();
    //list--it is a doubly linked list
    // list<int>l;
    // l.push_back(1);
    // l.push_back(23);
    // l.push_front(11);
    // for(int i:l)
    // {
    //     cout<<i<<endl;
    // }
    //  cout<<"size of list"<<l.size();
    // //we can copy the list 
    // list<int>t(l);
    // for(int s:t)
    // {
    //     cout<<s<<endl;
    // }
    //stl stack
    // stack<string>s;
    // s.push("simran");
    // s.push("vandu");
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top();
    // cout<<"size of the stack"<<s.size()<<endl;
    // if(s.empty())
    // {
    //     cout<<"stack is empty";
    // }
    // else
    // {
    //     cout<<"stack is not empty";
    // }
    //queue 
    // queue<int>q;
    // q.push(1);
    // q.push(22);
    // cout<<q.front();
    // q.pop();
    // cout<<q.front();
    //for cretaing max heap we will use as :
    // priority_queue<int>maxi;
    // //this means it will give the maximum elemnt
    // maxi.push(23);
    // maxi.push(11);
    // maxi.push(112);
    // int S=maxi.size();
    // for (int i=0;i<S;i++)
    // {
    //     cout<<maxi.top()<<endl;
    //     maxi.pop();
    // }
    // //we can make a min heap using:
    // priority_queue<int,vector<int>,greater<int>>mini;
    // mini.push(22);
    // mini.push(11);
    // mini.push(13);
    // int t=mini.size();
    // for(int i=0;i<t;i++)
    // {
    //     cout<<mini.top()<<endl;
    //     mini.pop();
    // }
    //set--stores unique elements
    //implementtation take place by bst 
    //sorted order mai aate hai output 
    //unordered set mai random order hota hai 
//       set<int>st;
//       st.insert(23);
//       st.insert(11);
//       st.insert(34);
//       st.insert(34);
//       st.insert(11);
//       for(int i:st)
//       {
//         cout<<i<<endl;
//       }
//       st.erase(st.begin());
//       cout<<st.count(34)<<endl;//cecks whehether elemnt is present or not 
//       set<int>::iterator itr=st.find(23);//this will stors the iterstor of 11 in itr 
//       itr++;
//       cout<<*itr;
//       //time complexity of count,find,erase,insert is o(logn)
//       //stl map-used to store key value pairs just like the dictionary
//       //value can be same but key should be unique 
//       map<int,string>m;
//       m[1]="babbar";
//       m[2]="simran";
//       for(auto i:m)
//       {
// cout<<i.first<<""<<i.second<<endl;
//       }
//       m.insert({5,"bheem"});
//       m.insert({6,"sim"});
//       //checks wther it is present or not 
//       cout<<m.count(5)<<endl;
//       //ordered map ki time complexity insert,count,find ki O(logn) hoti hai and unordered map ki O(1) hoti hai 
//       auto it=m.find(2);//or we can write map<int,string>::iterator itr;
//       for (auto i=it;i!=m.end();i++)
//       {
//         cout<<(*i).first<<endl;
//       }
      //stl bianry search---it  souldbe in sorted order 
      vector<int>v;
      v.push_back(23);
      v.push_back(45);
      v.push_back(90);
      v.push_back(111);
      cout<<binary_search(v.begin(),v.end(),45);
      cout<<min(2,4);
      cout<<max(2,3);
      int a=22;
      int b=34;
      swap(a,b);
      cout<<a<<endl<<b;
      string ac="simmi";
      reverse(ac.begin(),ac.end());
      cout<<ac;





    
       


      



       






    


    return 0;
}