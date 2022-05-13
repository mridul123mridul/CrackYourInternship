class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0; int j=height.size()-1;
        int ar=INT_MIN;
        while(i<j){
            int h,w;
            h=min(height[i],height[j]);
            w=j-i;
            ar=max(ar,h*w);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return ar;
    }
};
