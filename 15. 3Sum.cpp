class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size()<3) return res; //base case
        //a+b+c=0 => b+c=-a
        //by using two ptr approach we can find b and c
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){ //(i>0 && nums[i]!=nums[i-1]) is to ignore duplicates eg if nums= {-3 -3 -2 1 2 2} so we will take -3 only once
                int lo=i+1,hi=nums.size()-1,sum=0-nums[i]; //sum=0-nums[i] to make -a as b+c=-a
                while(lo<hi){
                    if(nums[lo]+nums[hi]==sum){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        res.push_back(temp);
                        while(lo<hi && nums[lo]==nums[lo+1]) lo++; //to remove duplicates
                        while(lo<hi && nums[hi]==nums[hi-1]) hi--;
                        lo++; hi--;
                    }
                    else if(nums[lo]+nums[hi]<sum) lo++; //because nums[lo]<nums[hi] and value of sum is greater than 0, so we have to minimize the effect of nums[hi] so we will choose greater nums[lo]
                    else hi--;
                }
            }
        }
        return res;
    }
};
