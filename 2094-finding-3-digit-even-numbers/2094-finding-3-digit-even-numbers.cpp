class Solution {
public:
    void isEven(vector<int>& digits,vector<int>& ans,vector<int>& current,vector<bool>& visited){
        if(current.size()==3){
            if(current[2] % 2==0){
              int x = current[0] * 100 + current[1] * 10 + current[2];

                ans.push_back(x);
            }
            return;
        }
        for(int i=0;i<digits.size();i++){
            if(visited[i])
            continue;
            if(current.empty() && digits[i]==0)
            continue;
            visited[i]=true;
            current.push_back(digits[i]);
            isEven(digits,ans,current,visited);
            current.pop_back();
            visited[i]=false;
        }
    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
         vector<bool> visited(digits.size(), false);
        vector<int>current;
        isEven(digits, ans, current, visited);
        sort(ans.begin(), ans.end());

        ans.erase(unique(ans.begin(), ans.end()), ans.end());
            return ans;
    }
};