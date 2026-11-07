class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int count = 0;
        for(int i =0;i< nums.size()-count;i++){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                i--;
            }     
        }
count =0;
        
        k=nums.size();
   return k; }
};