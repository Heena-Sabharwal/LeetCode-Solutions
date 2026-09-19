class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int> arr;

        // Step 1: Convert number → digits array
        while (n > 0) {
            arr.push_back(n % 10);
            n /= 10;
        }
        reverse(arr.begin(), arr.end());

        int size = arr.size();

        // Step 2: Find pivot
        int pivot = -1;
        for (int i = size - 1; i > 0; i--) {
            if (arr[i - 1] < arr[i]) {
                pivot = i - 1;
                break;
            }
        }

        // If no pivot → no greater permutation
        if (pivot == -1) return -1;

        // Step 3: Find next greater element (from right)
        for (int i = size - 1; i > pivot; i--) {
            if (arr[i] > arr[pivot]) {
                swap(arr[i], arr[pivot]);
                break;
            }
        }

        // Step 4: Reverse the suffix
        reverse(arr.begin() + pivot + 1, arr.end());

        // Step 5: Convert back to number
        long long ans = 0;
        for (int d : arr) {
            ans = ans * 10 + d;
        }

        // Step 6: Check 32-bit limit
        if (ans > INT_MAX) return -1;

        return (int)ans;
    }
};