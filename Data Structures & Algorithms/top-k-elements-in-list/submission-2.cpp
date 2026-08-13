class Solution {
        public:
            vector<int> topKFrequent(vector<int>& nums, int k) {

                    unordered_map<int, int> freq;

                            // Frequency count
                                    for (int x : nums) {
                                                freq[x]++;
                                                        }

                                                                // Frequency map -> vector
                                                                        vector<pair<int, int>> arr;

                                                                                for (auto it : freq) {
                                                                                            arr.push_back({it.first, it.second});
                                                                                                    }

                                                                                                            // Sort by frequency descending
                                                                                                                    sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
                                                                                                                                return a.second > b.second;
                                                                                                                                        });

                                                                                                                                                // Take top k
                                                                                                                                                        vector<int> ans;

                                                                                                                                                                for (int i = 0; i < k; i++) {
                                                                                                                                                                            ans.push_back(arr[i].first);
                                                                                                                                                                                    }

                                                                                                                                                                                            return ans;
                                                                                                                                                                                                }
                                                                                                                                                                                                };
