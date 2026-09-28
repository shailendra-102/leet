class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>diff(n+1);
        for(auto flights:bookings){
            int st=flights[0];
            int end=flights[1];
            int seats=flights[2];
            diff[st-1]+=seats;
            diff[end]-=seats;
        }
        vector<int>ans(n);
        ans[0]=diff[0];
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]+diff[i];
        }
        return ans;
    }
};
