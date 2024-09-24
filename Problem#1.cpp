//Q1:Contains Duplicate
//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
//Example 1:
//Input: nums = [1,2,3,1]
//Output: true


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool containsDuplicate(vector<int>&num){
      //// If the size of the set (unique elements) is less than the original array size, return true
       return set<int>(num.begin(),num.end()).size() != num.size();    
    }
};
int main()
{   
    vector<int>num={1,2,3,1};
    Solution s;
    cout<<s.containsDuplicate(num)<<endl;
    return 0;
}
 
