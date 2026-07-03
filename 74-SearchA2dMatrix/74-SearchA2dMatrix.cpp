// Last updated: 04/07/2026, 02:02:29
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int temp = -1;
        for(int i = 0; i < matrix.size(); i++){
            if(target < matrix[i][matrix[i].size() - 1]){
                temp = i;
                break;
            }
            else if(target == matrix[i][matrix[i].size() - 1]) return true;

        }
        
        if(temp == -1){
            return false;
        }

        int strt = 0;
        int end = matrix[temp].size() - 1;
        int mid = (strt + end) / 2;

        while(strt <= end){
            if(target == matrix[temp][mid]) return true;
            else if(target < matrix[temp][mid]){
                end = mid -1;
            }
            else{
                strt = mid + 1;
            }

            mid = (strt + end)/2;
        }
        return false;
    }
};
