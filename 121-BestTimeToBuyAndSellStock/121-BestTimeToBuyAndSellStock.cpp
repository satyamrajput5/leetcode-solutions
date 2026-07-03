// Last updated: 04/07/2026, 02:02:26
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int currProf = 0;
        int maxProf = 0;
        int buying = INT_MAX;

        for(int i = 0; i < n; i++)
            if(prices[i] <= buying) buying = prices[i];

            else{
                currProf = prices[i] - buying;
                maxProf = max(currProf, maxProf);
            }

        return maxProf;
    }
};
