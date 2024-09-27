
//https://leetcode.com/problems/group-anagrams/ 
//the link of this problem.
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
class Solution
{
public:
    // Function to group anagrams together
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        // Create a map to store the grouped anagrams
        // The key is the sorted string, and the value is a vector of original strings
        map<string, vector<string>> mp;

        // Iterate through each string in the input vector
        for (int i = 0; i < strs.size(); i++)
        {
            string x = strs[i];  // Copy the current string
            sort(x.begin(), x.end());  // Sort the string to form a key for the map (anagrams will have the same key)
            mp[x].push_back(strs[i]);  // Add the original string to the vector of its corresponding key (sorted string)
        }

        // Create a vector to store the result (grouped anagrams)
        vector<vector<string>> ans;

        // Iterate through the map and collect the grouped anagrams
        for (auto it : mp)
        {
            ans.push_back(it.second);  // Add each group (vector of strings) to the result
        }
        return ans; 
    }
};

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result;
    Solution s;
    result = s.groupAnagrams(strs);

    for (auto group : result)
    {
        for (auto word : group)
        {
            cout << word << " ";  // Print each word in the group
        }
        cout << endl;  // Print a new line after each group of anagrams
    }

    return 0; 
}

