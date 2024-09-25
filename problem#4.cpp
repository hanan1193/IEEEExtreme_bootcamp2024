//https://leetcode.com/problems/longest-consecutive-sequence/
//the link of the problem:
//the solution:
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& num) {
        set<int> numSet(num.begin(), num.end()); // Use a set for fast lookups
        int longest = 0;

        for (int n : num) {
            // Check if it's the start of a sequence
            if (numSet.find(n - 1) == numSet.end()) {
                int length = 1;
                int currentNum = n;

                // Find consecutive numbers starting from 'n'
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;  // Move to the next number in the sequence
                    length++;      // Increase the length of the sequence
                }

                // Update the longest sequence length found
                longest = max(longest, length);
            }
        }

        return longest;
    }
};

int main() {
    vector<int> num = {100, 4, 200, 1, 3, 2};  // Example input
    Solution s;
    cout << "The length of the longest consecutive elements sequence: " 
         << s.longestConsecutive(num) << endl;
    return 0;
}
