// #include <bits/stdc++.h> 
// bool findRedundantBrackets(string &s)
// {
//     stack<char>st;
//     for(int i=0;i<s.length();i++)
//     {
//         char ch=s[i];
//         if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/')
//         {
//             st.push(ch);
//         }
//         else{
//         if(ch==')')
//         {
//             bool isredudant=true;
//             while(st.top()!='(')
//             {
//                 char ch=st.top();
//                 if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
//                 {
//                     isredudant=false;
//                 }
//                 st.pop();
//             }
//             if (isredudant == true) {
//               return true;
//             }
//               st.pop();
            
//         }
//         }
//     }
//         return false;
// }
