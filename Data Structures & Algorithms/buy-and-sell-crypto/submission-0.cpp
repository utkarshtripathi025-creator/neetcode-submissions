class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minprices=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<n;i++){
            maxprofit=max(maxprofit,prices[i]-minprices);
            minprices=min(minprices,prices[i]);
        }
        return maxprofit;
    }
};
