// Last updated: 04/07/2026, 02:02:24
class Solution {
public:
    bool isPalindrome(string s) {

        int strt = 0;
        int ending = s.size() - 1;

        while (strt < ending) {

            while (strt < ending && !isalnum(s[strt])) {
                strt++;
            }

            while (strt < ending && !isalnum(s[ending])) {
                ending--;
            }

            if (tolower(s[strt]) != tolower(s[ending])) {
                return false;
            }

            strt++;
            ending--;
        }

        return true;
    }
};