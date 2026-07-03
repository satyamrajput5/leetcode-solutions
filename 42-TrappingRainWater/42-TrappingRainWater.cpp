// Last updated: 04/07/2026, 02:02:33
class Solution {
public:
    int trap(vector<int>& height) {
        
        int i = 0;
        int j = height.size() - 1;
        int trapped = 0;

        if(height.empty()) return 0;

        int leftMx = height[i];
        int rightMx = height[j];

        while(i != j){
            
            if(leftMx > rightMx){
                j--;
                rightMx = max(rightMx, height[j]);
                trapped += rightMx - height[j];
            }
            else{
                i++;
                leftMx = max(leftMx, height[i]);
                trapped += leftMx - height[i];

            }


        } 
        return trapped;

    }
};
