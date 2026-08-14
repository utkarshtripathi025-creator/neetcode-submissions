class Solution {
public:
    bool isPalindrome(string s) {
        string original="";
        for(char c:s){
            if(isalnum(c)){
                original+=tolower(c);
            }
        }
        string reversed=original;
        reverse(reversed.begin(),reversed.end());
        return original==reversed;
    }
};
