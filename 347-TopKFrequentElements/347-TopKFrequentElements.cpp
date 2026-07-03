// Last updated: 04/07/2026, 02:02:10
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> result;
        int max;
        int temp = 0;
        unordered_map <int, int> mp;

        for(int &val : nums){
            mp[val] += 1;
        }

        for(int i = 0; i < k; i++){
            max = INT_MIN;
            for(auto &it : mp){
                if(it.second > max){
                    max = it.second;
                    temp = it.first;
                }
            }
            result.push_back(temp);
            mp.erase(temp);
        }

        return result;
    }
};