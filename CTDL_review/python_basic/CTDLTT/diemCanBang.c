#include<stdio.h>
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int a[n];
        int totalSum = 0;
        for(int i = 0 ; i  < n; i++){
            scanf("%d", &a[i]);
            totalSum += a[i];
        }    
        int flag = 1;
        for(int i = 1; i < n-1; i++){
            int sum1 = totalSum - a[i];
            if(sum1%2==0){
                int temp = 0;
                if(i <=(n/2))
                for(int j = 0; j < i; j++)  temp+= a[j];
                else for(int j = n-1; j >= i+1; j--)  temp+= a[j];
                if(temp == (sum1/2)){
                    flag = 0;
                    printf("%d\n", i+1);
                    break;
                }
            }
        }
        if(flag)    printf("-1\n");

    }
    return 0;
}