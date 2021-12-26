#include<stdio.h>
int X[11], A[11], Xuoi[20], Nguoc[20];
int dem = 0, n;
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(A[j] && Xuoi[i-j+n] && Nguoc[i+j-1]){
            X[i] = j;
            A[j] = 0; Xuoi[i-j+n]  =0; Nguoc[i+j-1] = 0;
            if(i==n)    dem++;
            else Try(i+1);
            A[j] = 1; Xuoi[i-j+n]  =1; Nguoc[i+j-1] = 1;
            
        }
    }
}
int main(){
    int t; scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        dem = 0;
        for(int i = 1; i < 20; i++){
            if(i < 11)  A[i] = 1;
            Xuoi[i] = 1; Nguoc[i] = 1;
        }
        Try(1);
        printf("%d\n", dem);
    }
    return 0;
}