class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        for (int i=0;i<nums.size();i++){
            int count = nums[i];
            int sum=0;
            while (count >0){
                 int digit = count % 10;
                sum += digit;
                count = count / 10;
            }
            if(sum==i){
               return i;
               break;  
            }
        }
        return -1;
   }
};