bool isopen(char ch)
{
    if(ch=='{' || ch=='[' || ch=='(')
    {
        return true;
    }
    else{
        return false;
    }
}
bool isvalid(stack<char> st, char ch) {
    if(st.size()>0 and ((st.top()=='(' and ch==')') ||(st.top()=='[' and ch==']') ||(st.top()=='{' and ch=='}')))
    {
        return true;
    }
    else{
        return false;
    }
}

bool isValidParenthesis(string expression)
{
    if(expression.length()==1)
    {
        return false;
    }
    stack<char>st;
   for(int i=0;i<expression.length();i++)
   {
       char ch=expression[i];
       if(isopen(ch))
       {
         st.push(ch);
       }
       else{
           if(isvalid(st,ch))
           {
               st.pop();
           }
           else{
               return false;
           }
       }


   }
   if(st.size())
   {
       return false;
   } else {
     return true;
   }
}