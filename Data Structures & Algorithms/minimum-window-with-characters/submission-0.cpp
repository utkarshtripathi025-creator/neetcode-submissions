class Solution {
public:
    string minWindow(string s, string t) {
       
   unordered_map<char,int> need;
        unordered_map<char,int> window;

        // t ki frequency
        for(char c : t){
            need[c]++;
        }

        int required = need.size();
        int formed = 0;

        int left = 0;

        int minLen = INT_MAX;
        int start = 0;

        for(int right = 0; right < s.size(); right++){

            char c = s[right];
            window[c]++;

            // Requirement complete hui?
            if(need.count(c) && window[c] == need[c]){
                formed++;
            }

            // Valid window
            while(formed == required){

                // Minimum answer update
                if(right - left + 1 < minLen){
                    minLen = right - left + 1;
                    start = left;
                }

                // Left character remove
                char leftChar = s[left];
                window[leftChar]--;

                // Window invalid ho gayi?
                if(need.count(leftChar) &&
                   window[leftChar] < need[leftChar]){
                    formed--;
                }

                left++;
            }
        }

        if(minLen == INT_MAX){
            return "";
        }

        return s.substr(start, minLen);
    }
};
        


