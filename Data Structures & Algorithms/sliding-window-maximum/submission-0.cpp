class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        deque<int> dq;
        vector<int> ans;

        int left = 0;

        for(int right = 0; right < nums.size(); right++) {

            // Chhoti values ko remove karo
            while(!dq.empty() && nums[dq.back()] <= nums[right]) {
                dq.pop_back();
            }

            // Current index add karo
            dq.push_back(right);

            // Window se bahar index remove karo
            if(dq.front() < left) {
                dq.pop_front();
            }

            // Window size k ho gayi
            if(right - left + 1 == k) {

                // Front par maximum hai
                ans.push_back(nums[dq.front()]);

                // Next window ke liye left move
                left++;
            }
        }

        return ans;
    }
};