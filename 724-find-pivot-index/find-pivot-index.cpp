class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        vector<int> summ;

        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
            summ.push_back(sum);
        }

        for (int i = 0; i < summ.size(); i++) {
            int left = 0;

            if (i > 0) {
                left = summ[i - 1];
            }

            if (summ[summ.size() - 1] - summ[i] == left) {
                return i;
            }
        }

        return -1;
    }
};