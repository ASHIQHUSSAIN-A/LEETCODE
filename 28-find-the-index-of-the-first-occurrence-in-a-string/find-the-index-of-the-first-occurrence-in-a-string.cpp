class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0; // required by problem definition

        int x = needle.size(), y = haystack.size();

        if (x > y) return -1;

        for (int i = 0; i <= y - x; i++) {
            if (haystack.substr(i, x) == needle)
                return i;
        }
        return -1;
    }
};
