class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int>mp;
        for(char x:moves){
            mp[x]++;
        }
        if(mp['U']!=mp['D'] || mp['L'] != mp['R'])
        return false;
        return true;
    }
};