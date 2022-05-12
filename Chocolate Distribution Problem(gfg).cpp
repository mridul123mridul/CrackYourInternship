class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        //task is to bring min and max as close as possible so just sort and select the window
    long long ans=INT_MAX;
    sort(a.begin(),a.end());
    for(int i=0;i<=n-m;i++){
        ans=min(ans,a[i+m-1]-a[i]);
    }
    return ans;
    }   
};
