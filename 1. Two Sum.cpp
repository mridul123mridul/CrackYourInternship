class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int target1=target-nums[i];
            auto it=find(nums.begin(),nums.end(),target1);
            int index = it - nums.begin();
            if(it!=nums.end() && i!=index){
                    v.push_back(i);
                    v.push_back(index);
                    break; 
            } 
        }
        return v;
    }
};