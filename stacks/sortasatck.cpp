// #include <bits/stdc++.h> 
// void insertsorted(stack<int> &stack,int element)
// {
//   if(stack.empty() || !stack.empty() and stack.top()<element)
//   {
// 	  stack.push(element);
// 	  return;
//   }
//   int n=stack.top();
//   stack.pop();
//   insertsorted(stack,element);
//   stack.push(n);

// }
// void sortStack(stack<int> &stack)
// {
// 	if(stack.empty())
// 	{
// 		return;
// 	}
// 	int element=stack.top();
// 	stack.pop();
// 	sortStack(stack);
// 	insertsorted(stack,element);
// }