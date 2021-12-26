#include<stdio.h>

int main(){
    int t;  scanf("%d", &t);
    while(t--){
        int n, S;   scanf("%d%d", &n, &S);
        int a[n];
        for(int i = 0 ; i < n; i++) scanf("%d", &a[i]);
        int flag = 1;
        for(int i = 0 ; i < n; i++){
            int sum = a[i];
            if(sum == S){
                    flag = 0;
                    printf("YES\n");
                    break;
            }
            for(int j = i+1; j < n; j++){
                if(sum == S){
                    flag = 0;
                    printf("YES\n");
                    break;
                }
                sum += a[j];
            }
            if(flag == 0)   break;
        }
        if(flag)    printf("NO\n");
    }
    return 0;
}