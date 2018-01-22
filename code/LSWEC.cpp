//Given a string, find the length of the longest substring without repeating characters.
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> data;
        int start = -1;
        int maxlen = 0;
        for (int i = 0; i < s.size(); i++) {
            if (data.find(s[i]) != data.end()) {
                start = (data[s[i]] > start) ? data[s[i]] : start;
                
            }
            data[s[i]] = i;
            maxlen = ((i - start) < maxlen) ? maxlen : (i - start);
        }
        return maxlen;
        
    }
};
