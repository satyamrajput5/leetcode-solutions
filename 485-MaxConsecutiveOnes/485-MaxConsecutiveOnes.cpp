// Last updated: 04/07/2026, 02:02:07
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count = 0; // count will store jitna abhi chal rha
        int maxi = 0; // yeh max hain max will store jitna bhi highest consecutive 1 gaya

        for(int i = 0; i < nums.size(); i++){
            
                if(nums[i] == 1){
                    count++;
                }
                else{
                    count = 0;
                }
                maxi = max(count, maxi);
        }
        return maxi;
    }
};