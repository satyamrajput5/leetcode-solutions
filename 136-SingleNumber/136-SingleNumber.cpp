// Last updated: 04/07/2026, 02:02:22
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum = 0;
        for(int val : nums){
             sum = val ^ sum;
        }
        return sum;
    }
};