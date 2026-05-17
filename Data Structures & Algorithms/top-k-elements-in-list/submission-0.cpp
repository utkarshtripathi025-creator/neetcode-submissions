class Solution {
public:

static bool cmp(pair<int,int>& a, pair<int,int>& b){

        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
unordered_map<int,int> mp;
for(int num : nums){

            mp[num]++;
        }

// map to vector
        vector<pair<int,int>> vec;

        for(auto it : mp){

            vec.push_back(it);
        }

        // sort according to frequency
        sort(vec.begin(), vec.end(), cmp);

        vector<int> ans;

        // top k elements
        for(int i=0;i<k;i++){

            ans.push_back(vec[i].first);
        }

        return ans;
        
    }
};
