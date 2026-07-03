// Last updated: 04/07/2026, 02:02:31
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = nums[0];

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            if(sum >= maxSum){
                maxSum = sum;
            }
            
            if (sum < 0){
                sum = 0;
            }
        }
        return maxSum;
    }
};