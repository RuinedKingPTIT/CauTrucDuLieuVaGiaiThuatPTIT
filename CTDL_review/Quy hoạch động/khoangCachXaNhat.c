#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        ll a[n];
        for(int i = 0 ; i < n; i++) scanf("%lld", &a[i]);
        ll max_dis = -1;
        int flag = 1;
        for(int i = 0 ; i < n-1; i++){
            for(int j = n-1; j > i; j--){
                if(a[j] > a[i] && max_dis < (j-i)){
                    max_dis = (j-i);
                    flag = 0;
                    break;
                }
            }
            if(flag == 0)   break;
        }
        printf("%lld\n", max_dis);
    }
    return 0;
}