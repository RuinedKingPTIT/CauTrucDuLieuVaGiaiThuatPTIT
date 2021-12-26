#include<stdio.h>
const int mod = 1e9+7;
int main(){
    int t;  scanf("%d", &t);
    while(t--){
        int n, k; scanf("%d%d", &n, &k);
        int c[n+1][n+1];
        for(int i = 0 ; i <= n; i++){
            for(int j = 0 ;j  <= i; j++){
                if(j == 0 || j == i)    c[i][j] = 1;
                else c[i][j] = (c[i-1][j-1]%mod + c[i-1][j]%mod)%mod;
            }
        }
        printf("%d\n", c[n][k]);
    }

    return 0;
}