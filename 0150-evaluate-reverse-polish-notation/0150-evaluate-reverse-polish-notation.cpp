class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int>st;
        for(string x:tokens){
            if(x=="+"){
                int a=st.back();
                st.pop_back();
                int b=st.back();
                st.pop_back();
                st.push_back(b+a);
            }
            else if(x=="-"){
                int a=st.back();
                st.pop_back();
                int b=st.back();
                st.pop_back();
                st.push_back(b-a);
            }
            else if(x=="*"){
                int a=st.back();
                st.pop_back();
                int b=st.back();
                st.pop_back();
                st.push_back(b*a);
            }
            else if(x=="/"){
                int a=st.back();
                st.pop_back();
                int b=st.back();
                st.pop_back();
                st.push_back(b/a);
            }
            else{
                st.push_back(stoi(x));
            }
        }
        return st.back();
    }
};