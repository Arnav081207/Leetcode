class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n =nums.size();
        int maxi =0;
        int count = 0;
        for (int i =0 ; i<n-1;i++){
            if (nums[i+1]>nums[i]){
count ++;
            }
            else {
                count =0;
            }
            maxi=max(maxi,count);
        }
    return maxi +1;}
};