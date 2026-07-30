// Last updated: 31/07/2026, 02:45:18
class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long temp2 = 0;
        if (x < 0 || (x != 0 && x % 10 == 0)){
            return false;
        }
        else if(x == 0){
            return true;
        }
        else{
        while(temp != 0){
            int digit = temp % 10;
            temp2 = temp2 * 10 + digit;
            temp /= 10;
        }
        }
        if(x == temp2){
            return true;
        }
        return false;
    }
};