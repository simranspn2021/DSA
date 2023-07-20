//sprial matrix lleetcode 
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int>temp;
//         int m=matrix.size();
//         int n=matrix[0].size();
//         int left=0;
//         int top=0;
//         int right=n-1;
//         int bottom=m-1;
//         int d=0;
//         while(left<=right and top<=bottom)
//         {
//                if(d==0)
//                {
//                    for(int i=left;i<=right;i++)
//                    {
//                        temp.push_back(matrix[top][i]);
//                    }
//                    d=1;
//                    top++;
//                }
//                else if(d==1)
//                {
//                    for(int i=top;i<=bottom;i++)
//                    {
//                        temp.push_back(matrix[i][right]);
//                    }
//                    d=2;
//                    right--;
//                }
//                else if(d==2)
//                {
//                    for(int i=right;i>=left;i--)
//                    {
//                        temp.push_back(matrix[bottom][i]);
//                    }
//                    d=3;
//                    bottom--;
//                }
//                else if(d==3)
//                {
//                    for(int i=bottom;i>=top;i--)
//                    {
//                        temp.push_back(matrix[i][left]);

//                    }
//                    d=0;
//                    left++;
//                }

//         }
//         return temp;
//     }
// };