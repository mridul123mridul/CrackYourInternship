//cycle sort but a bit modified
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        int num=0;
        while(i<nums.size()){
            int correct=nums[i]-1;
            if(nums[i]!=nums[correct]) swap(nums[i],nums[correct]);
            else{
                num=nums[i];
                i++;
            }
        }
        return num;
    }
};