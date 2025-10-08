class Solution {
public:
    int findMaxLength(vector<int>& nums)
    {
        int rSum = 0, lenMaxSubArr = 0;
        unordered_map<int, int> rSumIdx;
        rSumIdx[0] = -1; //Edge case if sub-array starts at index 0

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                --rSum;
            } else {
                ++rSum;
            }

            if (rSumIdx.contains(rSum)) {
                if ((i - rSumIdx[rSum]) > lenMaxSubArr) {
                    lenMaxSubArr = i - rSumIdx[rSum];
                }
            } else {
                rSumIdx[rSum] = i;
            }
        }

        return lenMaxSubArr;
    }
};
