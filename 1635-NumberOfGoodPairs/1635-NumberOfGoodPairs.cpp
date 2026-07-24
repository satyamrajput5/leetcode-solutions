// Last updated: 25/07/2026, 02:09:23
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(i < j && nums[i]==nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};