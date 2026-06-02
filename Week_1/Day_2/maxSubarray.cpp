int maxSubArray(vector<int>& nums) {
        int c_Sum = nums[0];
        int maxSum = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            c_Sum = max(nums[i], c_Sum + nums[i]);
            maxSum = max(maxSum, c_Sum);
        }

        return maxSum;
    }