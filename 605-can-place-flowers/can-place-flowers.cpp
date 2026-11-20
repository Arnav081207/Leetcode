class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int k) {
        int st = 0;
        int n = arr.size();
        int count = 0;

        while (st < n) {
            if (arr[st] == 0 &&
                (st == 0 || arr[st-1] == 0) &&
                (st == n-1 || arr[st+1] == 0)) {

                count++;
                arr[st] = 1;
                st = st + 2;
            }
            else {
                st++;
            }
        }

        if (count >= k) {
            return true;
        }

        return false;
    }
};