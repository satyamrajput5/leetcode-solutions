// Last updated: 04/07/2026, 02:01:58
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        int n = position.size();
        int fleet = 0;
        double lastFleet = 0;
        vector<pair<int, double>> posTime(n);

        for(int i = 0; i < n; i++){

            posTime[i].first = position[i];
            posTime[i].second = (double)(target - position[i])/speed[i];

        }

        sort(posTime.begin(), posTime.end());

        for(int i = n - 1; i >= 0; i--){

            if(posTime[i].second > lastFleet){
                fleet++;
                lastFleet = posTime[i].second;
            }

        }
        return fleet;
    }
};
