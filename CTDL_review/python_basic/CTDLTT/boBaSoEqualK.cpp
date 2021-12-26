#include<bits/stdc++.h>
using namespace std;
int checkTriplet(int *a, int n, int k){
    sort(a, a+n);
    for(int i = n-1; i >=2 ; i--){
        int l = 0;
        int r = i-1;
        while(l < r){
            if(a[l] + a[r] + a[i] == k) return 1;
            (a[l] + a[r] + a[i] > k)? r-- : l++;
        }
    }
    return 0;
}
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n, k; scanf("%d%d", &n, &k);
        int a[n];
        for(int i = 0 ; i < n; i++) scanf("%d", &a[i]);
        if(checkTriplet(a, n, k))   printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}