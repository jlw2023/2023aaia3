//week09-1.cpp
//最有錢的人,有ˇ多少錢
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size();//有幾個人
        int N = accounts[0].size();//這個人有幾個帳戶
        int ans=0;
        

        for(int i=0; i<M; i++){//第i個人
            int total=0;//迴圈前面total是0
            for(int j=0; j<N; j++){//迴圈中間total增加
                total += accounts[i][j];
            }
            if(total>ans) ans = total;//迴圈後面total拿來用

        
        }
        return ans;
    }
};