//https://leetcode.com/problems/container-with-most-water/
//the link of the problem.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxArea(vector<int>&height){
        int l=0,r=height.size()-1,ans;
        int maximum=-1;
        while(l<r){
            ans=min(height[l],height[r])*(r-l);
            maximum=max(maximum,ans);
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return maximum;
        
        
    }
};
int main()
{
    vector<int>height = {1,8,6,2,5,4,8,3,7};
    Solution s;
    int result=s.maxArea(height);
    cout<<result<<endl;
    return 0;
}
