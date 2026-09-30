class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;
        int ans = 0;
        for(string x : operations) {
            if(x == "D") {
                st.push_back(2 * st.back());
            }
            else if(x == "C") {
                st.pop_back();
            }
            else if(x == "+") {
                int a = st.back();
                st.pop_back();
                int b = st.back();
                st.push_back(a);
                st.push_back(a + b);
            }
            else {
                st.push_back(stoi(x));
            }
        }
        for(int x : st) {
            ans += x;
        }
        return ans;
    }
};