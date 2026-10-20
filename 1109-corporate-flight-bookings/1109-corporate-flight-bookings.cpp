class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>flights(n,0);

        for(int i=0;i<bookings.size();i++){
            flights[bookings[i][0]-1]+=bookings[i][2];

            if(bookings[i][1]<n){
                flights[bookings[i][1]]-=bookings[i][2];
            }
        }

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=flights[i];
            flights[i]=sum;
        }
        return flights;
    }
};