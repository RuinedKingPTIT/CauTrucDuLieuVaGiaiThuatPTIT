#include<bits/stdc++.h>
using namespace std;

int X[11], A[11], Xuoi[20], Nguoc[20];
int matrix[9][9];
int maxSum = INT_MIN;
void cmp(){
    int total = 0;
    for(int i = 1; i<= 8; i++){
        total += matrix[i][X[i]];
    }
    if(maxSum < total)  maxSum = total;
    
}
void Try(int i){
    for(int j = 1; j <= 8; j++){
        if(A[j] && Xuoi[i-j+8] && Nguoc[i+j-1]){
            X[i] = j;
            A[j] = 0; Xuoi[i-j+8]  =0; Nguoc[i+j-1] = 0;
            if(i==8)    cmp();
            else Try(i+1);
            A[j] = 1; Xuoi[i-j+8]  =1; Nguoc[i+j-1] = 1;
        }
    }
}
int main(){
    int t; scanf("%d", &t);
    while(t--){
        for(int i = 1; i <= 8; i++){
            for(int j = 1; j <= 8; j++) cin >> matrix[i][j];
        }
        for(int i = 1; i <= 8; i++) A[i] = 1;
        for(int i = 1; i < 16; i++){
            Xuoi[i] = 1;    Nguoc[i] = 1;
        }

        Try(1);
        printf("%d\n", maxSum);
        maxSum = INT_MIN;
    }
    return 0;
}