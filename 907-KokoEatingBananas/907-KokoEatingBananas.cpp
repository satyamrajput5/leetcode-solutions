// Last updated: 08/07/2026, 15:51:26
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        while (left <= right) {
            int mid = left + (right - left) / 2;

            long long currtime = 0;

            for (int val : piles) {
                currtime += (val + mid - 1) / mid;
            }

            if (currtime <= h) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};