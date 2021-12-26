#include<bits/stdc++.h>
using namespace std;
int findMin(int *a, int n, int x){
    int min = x;
    for(int i = x; i < n; i++){
        if(a[i] < a[min])   min = i;
    }
    return min;
}
int countLeastOfSteps(int *a, int n){
    int res = 0;
    for(int i = 0 ; i < n; i++){
        int x = findMin(a, n, i);
        if(i!=x){
            res++;
            swap(a[i], a[x]);
        }
    }
    return res;
}
int main(){
    
        int n; cin >> n;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        cout << countLeastOfSteps(a, n) << endl;
        delete a;
  
    return 0;
}