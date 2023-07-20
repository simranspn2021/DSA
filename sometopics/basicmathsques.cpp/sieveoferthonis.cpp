// time coplexity is O(n*(log (logn)))//sieve of erasthonis
// class Solution {
// public:
//     int countPrimes(int n) {
//         int count=0;
//         vector<bool>temp(n+1,true);
//         temp[0]=temp[1]=false;
//         for(int i=2;i<n;i++ )
//         {
//             if(temp[i])
//             {
//                 count++;
//             }
//             for(int j=2*i;j<n;j=j+i)
//             {
//                 temp[j]=false;
//             }
//         }
//         return count;
//     }
// };