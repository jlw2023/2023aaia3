class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256] ={};//陣列，裡面統計字母出現次數，初始值都是0(因為有大括號}
        for(char c:s){//針對字串s裡面的每個字母c，逐一統計分析
            H[c]++;//增加，多了一個字母c
        }
        for(char c:t){
            H[c]--;//減少，用到一個字母c,陣列的格子裡資料就變少
            if(H[c]<0) return c;//如果變成負的，那就不夠用，找到兇手啦!

        }
        return ' ';//最後都沒有找到的話，回傳空白字母' ' 中間有個空格 且單引號歐!
    }
};