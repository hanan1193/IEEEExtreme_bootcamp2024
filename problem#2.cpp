//Q:Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.

//An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isAnagram(string s,string t){
       // If the lengths of the strings are different, they cannot be anagrams
        if(s.size() != t.size()){
            return false;
        }
         // Sort both strings
         sort(s.begin(),s.end());//sort() is a standalone function from the <algorithm> header
         sort(t.begin(),t.end());
         // Compare the sorted strings
         return s==t;
       
        
    }
};
int main()
{   
   // Declaring the two strings
   string s = "racecar", t = "carrace";
   // Create an instance of the Solution class
    Solution sol;
    cout<<sol.isAnagram( s, t)<<endl;
    return 0;
}
