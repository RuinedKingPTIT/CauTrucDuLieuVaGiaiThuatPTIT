#include<stdio.h>
#include<math.h>
const int mod = 1e9+7;
int main(){
    int n, k; 
    while(scanf("%d%d", &n, &k)){
        int c[n+1][n+1];
        for(int i = 0 ; i <= n; i++){
            for(int j = 0 ;j  <= i; j++){
                if(j == 0 || j == i)    c[i][j] = 1;
                else c[i][j] = (c[i-1][j-1]%mod + c[i-1][j]%mod)%mod;
            }
        }
        int CKN = c[n][k];
        int dem = 0;
        for(int i = 1; i <= sqrt(CKN); i++){
            if(CKN%i==0){
                dem++;
                if(i!=(CKN/i))    dem++;
            }
        }
        printf("%d\n", dem);
    }


    return 0;
}