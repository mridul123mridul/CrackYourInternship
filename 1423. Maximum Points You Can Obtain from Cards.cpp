class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        vector<int> prefx(n,0);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=cardPoints[i];
            prefx[i]=sum;
        }
        if(k==n) return sum;
        int res=0,ans=0;
        for(int i=0;i<=k;i++){
            int j=i+cardPoints.size()-k-1;//window size
            if(i==0) ans=prefx[j];
            else ans=prefx[j]-prefx[i-1];
            res=max(res,sum-ans);
        }
        return res;
    }
};
