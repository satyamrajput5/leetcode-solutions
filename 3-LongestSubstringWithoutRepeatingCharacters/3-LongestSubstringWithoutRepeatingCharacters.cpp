// Last updated: 04/07/2026, 02:02:40
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> freq(256,0);
        int l = 0;
        int r = 0;
        int n = s.size();
        int longSub = 0;

        while(r < n){
            freq[s[r]]++;

            while(freq[s[r]] > 1){
                freq[s[l]]--;
                l++;
            }
            longSub = max(longSub , r-l + 1);
            r++;

        }
        return longSub;

    }
};
