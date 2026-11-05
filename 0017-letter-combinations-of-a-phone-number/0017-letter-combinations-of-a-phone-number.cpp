class Solution {
    vector<string> res;

public:
    vector<string> letterCombinations(string digits) {
        res.clear();

        if(digits.empty()) return {};

        vector<string> nums = {
            "abc", "def", "ghi",
            "jkl", "mno", "pqrs",
            "tuv", "wxyz"
        };

        string temp = "";
        solve(digits, temp, nums, 0);

        return res;
    }

    void solve(string& digits, string& temp, vector<string>& nums, int index) {

        if(index == digits.size()) {
            res.push_back(temp);
            return;
        }

        int num = digits[index] - '2';

        for(char ch : nums[num]) {
            temp.push_back(ch);

            solve(digits, temp, nums, index + 1);

            temp.pop_back();
        }
    }
};