// Last updated: 04/07/2026, 02:02:18
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        auto start = 0;
        int end = numbers.size() - 1;

        while(numbers[start] + numbers[end] != target){

            if(numbers[start] + numbers[end] > target){

                end --;

            }

            else if(numbers[start] + numbers[end] < target){

                start++;
            }

        }
        
        return{start+1, end+1};

    }
};