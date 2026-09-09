
class Solution {
public:
 vector<vector<int>>ans;
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
                
                path.push_back(nums[i]);
                backtrack(nums,i,target-nums[i]);
                path.pop_back();

            }
        }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        backtrack(nums,0,target);
        return ans;
        
    }
};
