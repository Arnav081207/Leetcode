class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        if (nums.empty()) return 0;

        int mid = (start + end) / 2;

        while (nums[mid] != target) {
            if (nums[mid] > target) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }

            if (start > end) {
                return start;
            }

            mid = (start + end) / 2;
        }

        return mid;
    }
};
