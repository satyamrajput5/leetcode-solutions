// Last updated: 04/07/2026, 02:01:55
class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sum = 0;

        int low = 0;
        int up = n+k;

        for(int i = low; i <= up; i++){
            if(abs(n - i) <= k && (n & i ) == 0){
                sum = sum + i;
            }
        }
        return sum;
    }
};