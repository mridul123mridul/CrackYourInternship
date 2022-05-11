class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=INT_MIN;
        int mn=INT_MAX;
        for(int i=0;i<prices.size();i++){
            mn=min(mn,prices[i]);
            p=max(prices[i]-mn,p);
        }
        return p;
    }
};