class Solution {
public:
    int maxDepth(string s) {
        int parenthesis = 0;
        int ans = 0;
        for(char c:s){
            if(c=='('){
                parenthesis++;
                ans = max(ans,parenthesis);
            }
            else if(c==')'){
                parenthesis--;
            }
        }
        return ans;
    }
};