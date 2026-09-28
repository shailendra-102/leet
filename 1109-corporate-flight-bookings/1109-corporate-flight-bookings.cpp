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
        for(int i=1;i<n;i++){
            diff[i]+=diff[i-1];
        }
        diff.pop_back();
        return diff;
    }
};
