// //Group Anagrams
// Solved 
// Given an array of strings strs, group all anagrams together into sublists. You may return the output in any order.

// An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

// Example 1:

// Input: strs = ["act","pots","tops","cat","stop","hat"]

// Output: [["hat"],["act", "cat"],["stop", "pots", "tops"]]
// Example 2:

// Input: strs = ["x"]

// Output: [["x"]]
// Example 3:

// Input: strs = [""]

// Output: [[""]]
// Constraints:

// 1 <= strs.length <= 1000.
// 0 <= strs[i].length <= 100
// strs[i] is made up of lowercase English letters.


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> grupos;
        for (int i = 0; i<strs.size();i++){
            const string &original = strs[i];
            string clave = original;
            sort(clave.begin(), clave.end());
            grupos[clave].push_back(original);
        }
        vector<vector<string>> resultado;
        for ( const pair<string, vector<string>> &r : grupos){
            resultado.push_back(r.second);
        }
        return resultado;
    }
};
