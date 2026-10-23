class Solution {
public:
    int maxArea(vector<int>& nums) {
      int max_area =0;
      int lp=0;
      int rp = nums.size()-1;
      while(lp<rp){
int w = rp-lp;
int ht = min (nums[lp],nums[rp]);
int area=w*ht;
 max_area=max(max_area,area);
if (nums[lp] < nums[rp])
    lp++;
else
    rp--;

      }  
      return max_area;
    }
};