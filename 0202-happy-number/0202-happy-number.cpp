class Solution {
public:
    int nextSum(int n) {
        int tsum = 0;
        while(n>0){
            int num = n%10;
            tsum += num*num;
            n/=10;
            
        }
        return tsum;
        
    }
    bool isHappy(int n) {
        unordered_set<int> seen;

        while (n != 1) {
            if (seen.count(n)) {
                return false;
            }
            seen.insert(n);
            n = nextSum(n);
        }

        return true;
    }
};