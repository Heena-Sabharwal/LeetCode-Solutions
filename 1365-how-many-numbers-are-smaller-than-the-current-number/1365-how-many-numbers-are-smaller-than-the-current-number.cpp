struct Node {
    int value;
    int index;
    };

    bool cmp(Node a, Node b) {
        return a.value < b.value;
    }

class Solution {
public:

    
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<Node> arr;

        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end(), cmp);

        vector<int> res(nums.size());

        for (int i = 0; i < arr.size(); i++) {

            if (i == 0) {
                res[arr[i].index] = 0;
            }

            else if (arr[i].value == arr[i - 1].value) {
                res[arr[i].index] = res[arr[i - 1].index];
            }

            else {
                res[arr[i].index] = i;
            }
        }

        return res;
        
    }
};