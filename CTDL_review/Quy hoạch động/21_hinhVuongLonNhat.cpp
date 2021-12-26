#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        int row, col;   cin >> row >> col;
        int a[row][col];
        for(int i = 0 ; i < row; i++){
            for(int j = 0 ; j < col; j++)   cin >> a[i][j];
        }
        int AuxiMatrix[row][col];
        for(int i = 0 ; i < row; i++)   AuxiMatrix[i][0] = a[i][0];
        for(int i = 0 ; i < col; i++)   AuxiMatrix[0][i] = a[0][i];
        for(int i = 1; i < row; i++){
            for(int j = 1; j < col; j++){
                if(a[i][j] == 1) AuxiMatrix[i][j] = min(AuxiMatrix[i][j-1], min(AuxiMatrix[i-1][j], AuxiMatrix[i-1][j-1])) + 1;
                else AuxiMatrix[i][j] = 0;
            }
        }
        int maxOfA, maxI, maxJ;
        maxOfA = AuxiMatrix[0][0];
        maxI = 0;
        maxJ = 0;
    
        for(int i = 0 ; i <row; i++){
            for(int j = 0 ;j < col; j++){
                if(maxOfA < AuxiMatrix[i][j]){
                    maxOfA = AuxiMatrix[i][j];
                    maxI = i;
                    maxJ = j;
                }
            }
        }
        // cout << maxI << endl;
        int res = 0;
        for(int i = maxI; i > maxI - maxOfA;i--){
            for(int j = maxJ;j > maxJ - maxOfA; j--){
                if(a[i][j] == 1){
                    res++;
                    break;
                }
            }
            // cout << endl;
        }
        cout << res << endl;
    }

    return 0;
}