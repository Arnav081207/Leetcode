class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> arr;
        if (x<0){
            return false;
        }
        while (x>0){
            arr.push_back(x%10);
            x=x/10;
        }
        int st=0;
        int end =arr.size()-1;
        while(st<end){
            if(arr[st]!=arr[end]){
                return false;
            }
            st++;
            end--;
        }

 return true;   }
};