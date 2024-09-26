class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s+s;//把她copy2次
        int N = s2.length();//新的長度
        return s2.substr(1,N-2).find(s) != string :: npos;
    }
};