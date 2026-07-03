// Last updated: 04/07/2026, 02:02:23
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set <int> st(nums.begin(), nums.end());
        int maxcons = 0;
        int currcons = 0;
        for(auto &it : st){
            
            if(st.find(it - 1) == st.end()){

                currcons = 1;

                while(st.find(it + currcons) != st.end()){

                    currcons++;

                }

            }

            maxcons = max(currcons, maxcons);

        }

        return maxcons;
    }
};