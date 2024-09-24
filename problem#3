//Q:Valid Palindrome 
//https://leetcode.com/problems/valid-palindrome (the link of this problem)
//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

//Given a string s, return true if it is a palindrome, or false otherwise.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isPalindrome(string s){
        string filteredSteing="";
        // Convert the string to lowercase and remove non-alphanumeric characters
        for(char c:s){
            if(isalnum(c)){
                filteredSteing+=tolower(c);
            }
            
        }
         // Check if the filtered string is a palindrome
        int left=0,right=filteredSteing.size()-1;
        while(left<right){
            if(filteredSteing[left]!=filteredSteing[right]){
                return false;
            }
            left++;
            right--;
            
        }
        return true;
        
    }
};
int main()
{
     string s = "A man, a plan, a canal: Panama";
     Solution ss;
    if (ss.isPalindrome(s)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}
