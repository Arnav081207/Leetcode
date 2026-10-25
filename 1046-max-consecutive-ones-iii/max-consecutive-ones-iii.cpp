class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int left =0;
       int count =0;
int zero=0;
int maxi=0;
       for(int right =0;right<nums.size();){
        if (nums[right]==1){
right ++;
count ++;
        }
        else if(nums[right]==0&&zero<k){
zero++;
count++;
right++;
        }
        else if (nums[right]==0&&zero>=k) {
        if(nums[left]==1){
left++;

count--;
        }
        else if(nums[left]==0){
            
            left++;
            count --;
            zero--;
        }
        }
maxi=max(maxi,right-left);
       } 
       return maxi;
    }
};