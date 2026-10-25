class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int sum=0;
        int maxi=nums.size()+1;
        for (int i = 0 ;i< nums.size();i++){
            sum=sum+nums[i];
            while(sum>=target){
                 maxi=min(maxi,i-left+1);
                sum =sum-nums[left];
                left++;
               
            }
            
        }
    return maxi == nums.size() + 1 ? 0 : maxi;
    }}
;