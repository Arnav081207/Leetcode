class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long digit = (num-3)/3;
        vector<long long> arr;
        if(num%3!=0){
            return arr;
        }
        else {
            arr.push_back(digit);
            arr.push_back(digit+1);
            arr.push_back(digit+2);
            return arr;
        }

        
            }
};