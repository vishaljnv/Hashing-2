class Solution {
public:
    int longestPalindrome(string s)
    {
        unordered_set<int> chars;
        int len = 0;

        for (auto &ch : s) {
            if (chars.contains(ch)) {
                len += 2;
                chars.erase(ch);
            } else {
                chars.insert(ch);
            }
        }

        if (chars.size()) {
            ++len;
        }

        return len;
    }
};
