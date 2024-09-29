//https://leetcode.com/problems/minimum-window-substring/
//the link of this problem.
#include <iostream>
#include <unordered_map>
#include <string>
#include <climits>  // For INT_MAX
#include <vector>

using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size() || t.size() == 0) {
            return "";
        }

        unordered_map<char, int> countT, window;
        for (char c : t) {
            countT[c]++;
        }

        int have = 0, need = countT.size();
        vector<int> res = {-1, -1};
        int resLen = s.size() + 1;
        int l = 0;

        for (int r = 0; r < s.size(); r++) {
            char c = s[r];
            window[c]++;

            // Check if current window has enough of character `c` as needed in `t`
            if (countT.find(c) != countT.end() && window[c] == countT[c]) {
                have++;
            }

            // Try to contract the window from the left until it ceases to be valid
            while (have == need) {
                // Update result if the current window is smaller
                if (r - l + 1 < resLen) {
                    res = {l, r};
                    resLen = r - l + 1;
                }

                // Pop the left character from the window
                window[s[l]]--;

                // If we no longer have enough of the left character, reduce `have`
                if (countT.find(s[l]) != countT.end() && window[s[l]] < countT[s[l]]) {
                    have--;
                }

                l++;  // Move left pointer to shrink the window
            }
        }

        int start = res[0], end = res[1];

        // If no valid window was found, return an empty string
        if (start == -1) {
            return "";
        }

        return s.substr(start, end - start + 1);
    }
};

int main() {
    Solution solution;
    string s = "ADOBECODEBANC";
    string t = "ABC";
    string result = solution.minWindow(s, t);
    cout << "The minimum window substring is: " << result << endl;  // Output: "BANC"
    return 0;
}
