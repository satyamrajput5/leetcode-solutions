// Last updated: 04/07/2026, 02:02:16
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map <int, int> m;
        for(auto num: nums){
            m[num]++; // stores the frequency of each element in the map
        }

        for(auto i: m){
            if(i.second > 1){
                return true;
            }
        }
        return false;
    }
};