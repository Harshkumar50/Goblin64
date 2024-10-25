class Solution {
public:
    int strStr(string haystack, string needle) {
        int k = 0;
        for (int i = 0; needle[i]; i++) {
            k++;
        }
        for (int i = 0; haystack[i]; i++){
            if (haystack.substr(i, k) == needle)
            return i;
        }
        return -1;
    }
};
