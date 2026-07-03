// Last updated: 04/07/2026, 02:02:21
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        int a = 0;
        int b = 0;
        for(auto val: tokens){
            if(val != "+" && val != "-" && val != "*" && val != "/")st.push(stoi(val));

            else{
                    a = st.top(); st.pop();
                    b = st.top(); st.pop();

                    if(val == "+")st.push(a+b);
                    else if(val == "-")st.push(b-a);
                    else if(val == "*")st.push(a*b);
                    else st.push(b/a);
                }


        }
        return st.top();
    }
};
