class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int, int> rSumCount;
        int rSum = 0, result = 0;
        rSumCount[0] = 1; //Edge case if sub-array starts at index 0

        for (int i = 0; i < nums.size(); i++) {
            rSum += nums[i];

            if (rSumCount.contains(rSum - k)) {
                result += rSumCount[rSum - k];
            }

            rSumCount[rSum] += 1;
        }

        return result;    
    }
};
