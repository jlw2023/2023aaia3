class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5=0, d10=0, d20=0;//開始老闆沒零錢
        for(int c : bills){
            if(c==5) d5++;
            if(c==10){//客人要你找5元
                if(d5>0){
                    d10++;
                    d5--;
                }else return false;//沒辦法找錢，失敗了,心情就很差，這時候要告訴住自己不要緊張
            }
            if(c==20){
                if(d10>0 && d5>0){
                    d20++;
                    d10--;
                    d5--;
                }else if(d5>=3){
                    d20++;
                    d5-=3;
                }else return false;//沒辦法找錢，心情就很差
                
            }
        }
        return true;//全部都沒出錯，心情就很好
        //全部都沒出錯小心
    }
};