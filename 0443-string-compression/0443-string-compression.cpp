class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0, write = 0;

        while (i < n) {
            int start = i;

            while (i < n && chars[i] == chars[start]) {
                i++;
            }

            int count = i - start;
            chars[write++] = chars[start];

            if (count > 1) {
                string s = to_string(count);

                for (char c : s) {
                    chars[write++] = c;
                }
            }
        }

        return write;
    }
};