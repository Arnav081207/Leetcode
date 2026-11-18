class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int extraCandies) {
       int n = nums.size();
       vector<bool> arr;
       vector<int> sum;
       int maxi=INT_MIN;
       bool ak=false;
        for (int i =0;i<n;i++){
            sum.push_back(extraCandies+nums[i]);
maxi=max(maxi,nums[i]);
        }
        for (int i =0;i<n;i++){
            if (sum[i]>=maxi){
                arr.push_back(true);
            }
            else{
                arr.push_back(false);
            }
        }
  return arr;  }
};