//https://leetcode.com/problems/trapping-rain-water/submissions/1404799045/
//the link of this problem/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int trap(vector<int>& height){
        int n=height.size();
        if(n<=2){//we need atleast 3 bars to be able to trap water.
            return 0;
        }
        vector<int>left(n),right(n);
        //stor the leftMax for each bar.
        left[0]=0;
        int leftMax=height[0];
        for(int i=1;i<n;i++){
           left[i]=leftMax;
            leftMax=max(leftMax,height[i]);
            
        }
        //stor the rightMax for each bar.
       right[n-1]=0;
        int rightMax=height[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=rightMax;
            rightMax=max(rightMax,height[i]);
            
        }
        int trappedWater=0;
        for(int i=1;i<n-1;i++){
            if(min(right[i],left[i]) - height[i] >0){
                trappedWater +=min(right[i],left[i]) - height[i];
            }
        }
        return trappedWater;
        
        
    }
};
int main()
{  
   vector<int>height = {4,2,0,3,2,5};
   Solution s;
   cout<<s.trap(height)<<endl;
    return 0;
}
