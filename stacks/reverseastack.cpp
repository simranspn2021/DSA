// void insertatbottom(stack<int>& stack,int element)
// {
//     if(stack.empty())
//     {
//         stack.push(element);   
//         return;
//          }
//          int num=stack.top();
//          stack.pop();
//          insertatbottom(stack,element);
//          stack.push(num);
        
// }
// void reverseStack(stack<int> &stack) {
//     if(stack.empty())
//     {
//         return;
//     }
//     int element=stack.top();
//     stack.pop();
//     reverseStack(stack);
//     insertatbottom(stack,element);    

// }