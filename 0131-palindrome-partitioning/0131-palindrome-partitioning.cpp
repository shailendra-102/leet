class Solution {
public:
    bool isPalindrome(string s){
        string s2=s;
        reverse(s2.begin(),s2.end());
        return s==s2;
    }
    void getAllparts(string s,vector<string>& partitions,vector<vector<string>>& ans){
        if(s.size()==0){
            ans.push_back(partitions);
            return;
        }
        for(int i=0;i<s.size();i++){
            string partition = s.substr(0,i+1);
            if(isPalindrome(partition)){
                partitions.push_back(partition);
                getAllparts(s.substr(i+1),partitions,ans);
                partitions.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string>partitions;
        getAllparts(s,partitions,ans);
        return ans;
    }
};