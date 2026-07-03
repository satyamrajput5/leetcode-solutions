// Last updated: 04/07/2026, 02:02:17
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num = 0;
        int sum = 0;

        for(int val : nums){
        if(sum == 0){
            num = val;
            }
        
        if(num == val){
                sum++;
            }
        else{
                sum--;
            }
        }
        return num;
    }
};