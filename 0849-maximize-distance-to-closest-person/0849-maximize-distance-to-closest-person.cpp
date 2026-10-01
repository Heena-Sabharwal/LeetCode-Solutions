class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
          int n = seats.size();

    int start = 0;
    while (start < n && seats[start] == 0)
        start++;

    int end = 0;
    int i = n - 1;
    while (i >= 0 && seats[i] == 0) {
        end++;
        i--;
    }

    int middle = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (seats[i] == 0) {
            count++;
        } else {
            middle = max(middle, count);
            count = 0;
        }
    }

    int ans = max(start, end);
    ans = max(ans, (middle + 1) / 2);

    return ans;

    }
};