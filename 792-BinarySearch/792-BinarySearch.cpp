// Last updated: 04/07/2026, 02:02:00
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int strt = 0;
        int end = nums.size() - 1;
        int mid = (strt + end) / 2;

        while(strt <= end){
            if(target == nums[mid]){
                return mid;
            }
            else if(target > nums[mid]){
                strt = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = (strt + end) / 2;
        }
        return -1;
    }
};
