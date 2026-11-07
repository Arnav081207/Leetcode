class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> arr;
        int sum =0;
        for (int i =0;i<nums.size();i++){
sum=sum +nums[i];
arr.push_back(sum);
        }
        
        
        for (int i =0 ; i<arr.size();i++){
            if(arr[i]-nums[i]==arr[arr.size()-1]-arr[i]){
return i;             
        }
   }
    return -1;  }
};