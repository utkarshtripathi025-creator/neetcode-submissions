class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // map banaya
        // key  -> sorted string
        // value -> us key ke saare anagrams

        unordered_map<string, vector<string>> mp;

        // har string pe loop
        for(string s : strs) {

            // original string ki copy
            string temp = s;

            // copy ko sort kar diya
            sort(temp.begin(), temp.end());

            // sorted string ko key bana diya
            // aur original string ko vector me store kar diya

            mp[temp].push_back(s);
        }

        // final answer vector
        vector<vector<string>> ans;

        // map ke har group ko answer me daal do
        for(auto x : mp) {

            ans.push_back(x.second);
        }

        return ans;
    }
};