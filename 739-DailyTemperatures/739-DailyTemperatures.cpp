// Last updated: 04/07/2026, 02:02:01
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack <int> st;
        vector<int> result (temperatures.size(),0);

        for(int i = temperatures.size() - 1; i >= 0; i--){
            if(st.empty()){
                st.push(i);
                result[i] = 0;
            }
            while(!st.empty() && temperatures[i] >= temperatures[st.top()]){
                st.pop();
            }
            if(st.empty()) result[i] = 0;

            else{
                result[i] = st.top() - i;
            }
            st.push(i);

        }
        return result;
    }
};
