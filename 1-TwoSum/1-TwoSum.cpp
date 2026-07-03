// Last updated: 04/07/2026, 02:02:42
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> mp;
        int difference;
        for(int i = 0; i < nums.size(); i++){
            difference = target - nums[i];

            if(mp.find(difference) != mp.end()){
                
                int index = mp[difference];
                return {index, i};

            }

            else{
                mp[nums[i]] += i;
            }
        }

        return {-1, -1};
    }
};
