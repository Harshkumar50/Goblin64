class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> mp;  // Map for character to word
        map<string, char> mp2; // Map for word to character
        istringstream iss(s);
        vector<string> words;
        string word;
        
        // Split the string s into words
        while (iss >> word) {
            words.push_back(word);
        }

        // If pattern length is not equal to the number of words, return false
        if (pattern.size() != words.size()) {
            return false;
        }

        for (int i = 0; i < pattern.size(); ++i) {
            char p = pattern[i];
            string w = words[i];

            if (mp.find(p) != mp.end()) {
                if (mp[p] != w) {
                    return false;
                }
            } else {
                mp[p] = w;
            }

            if (mp2.find(w) != mp2.end()) {
                if (mp2[w] != p) {
                    return false;
                }
            } else {
                mp2[w] = p;
            }
        }

        return true;
    }
};
