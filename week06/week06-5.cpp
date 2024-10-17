//Leetcode 670
class Solution {
public:
    int maximumSwap(int num) {
        int ans = num;//最簡單的答案，就是本身
        string s = to_string(num);//stop反過來
        //for(int i=0; i<s.length() i++){//中間要用迴圈，更新答案


        //}
        for(int i=0; i<s.length()-1; i++){//左手i
            for(int j=i+1; j<s.length(); j++){//右手j
                swap(s[i], s[j]);
                ans = max(ans, stoi(s));
                swap(s[i], s[j]);
            }

        }

        return ans;
    }
};