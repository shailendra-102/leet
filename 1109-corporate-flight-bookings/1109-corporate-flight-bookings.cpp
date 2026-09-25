class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>ans(n,0);
        for(auto flights:bookings){
            int st=flights[0];
            int end=flights[1];
            int seats=flights[2];
            for(int i=st;i<=end;i++){
                ans[i-1] += seats;
            }
        }
        return ans;
    }
};