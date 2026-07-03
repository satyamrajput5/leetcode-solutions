// Last updated: 04/07/2026, 02:02:39
class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int maxArea = INT_MIN;
        int currArea = 0;

        int i = 0;
        int j = heights.size() - 1;


        while(i < j){

            currArea = min(heights[i] , heights[j]) * (j-i);

            if(heights[i] > heights[j]) j--;
            else i++;

            maxArea = max(currArea, maxArea);

        }
        return maxArea;
    }
};
