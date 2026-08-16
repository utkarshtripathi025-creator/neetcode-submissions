class Solution {
public:
bool matches(int freq1[],int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        int freq1[26]={0};
        int freq2[26]={0};
        for(int i=0;i<s1.size();i++){
            freq1[s1[i]-'a']++;
        }

        int left=0;
        //s2 pe sliding window laga rahe hai 
        for(int right=0;right<s2.size();right++){
            freq2[s2[right]-'a']++;
            if(right-left+1>s1.size()){
                freq2[s2[left]-'a']--;
                left++;
            }
            // frequency matching 
            if(right - left + 1 == s1.size()) {

                if(matches(freq1, freq2)) {
                    return true;
                }
        }
    }
    return false;
    }
};
