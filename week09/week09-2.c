int diagonalSum(int** mat, int matSize, int* matColSize) {
        int M = matSize;
        int ans = 0;
        for(int i=0; i<M; i++){
            ans += mat[i][i];//左上，右下
            ans += mat[i][M-1-i];//右上，左下

        }
        //扣掉中間(叉叉的交點)
        if(M%2==1) ans -= mat[M/2][M/2];
        return ans;
    
}