class Solution {
public: vector<vector<int>>ans;
        vector<int>path; 
        void backtrack(vector<int>nums,int index,int target){
             if (target==0){
            ans.push_back(path);
            return ;
             }
               if (target < 0) {
            return;
        }
            for(int i=index;i<nums.size();i++){
                if(i>index && nums[i]==nums[i-1])
                continue;
                
                path.push_back(nums[i]);
                backtrack(nums,i+1,target-nums[i]);
                path.pop_back();

            }
        }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        backtrack(candidates,0,target);
        return ans;
        
    }
};
