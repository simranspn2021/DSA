#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    //  Write your code here.
    //base case when stais is under the ground 
    if(nStairs<0)
    {
        return 0;
    }
    if(nStairs==0)//when its already in o stairs so he will jump and coome on 0 stairs only for n=0
    {
        return 1;
    }
    return countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
}
//we can better solution using dp 