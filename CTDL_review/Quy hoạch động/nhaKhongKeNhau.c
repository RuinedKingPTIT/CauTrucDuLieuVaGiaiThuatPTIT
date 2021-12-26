#include<stdio.h>

int findMaxSum(int *a, int n){
    int incl = a[0];
    int excl = 0;
    int excl_new;
    for(int i = 1; i < n; i++){
        excl_new = (incl > excl) ? incl : excl;
        incl = excl + a[i];
        excl = excl_new;
    }
    return (incl > excl) ? incl : excl;
}
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int a[n];
        for(int i = 0 ; i < n; i++) scanf("%d", &a[i]);
        printf("%d\n", findMaxSum(a, n));
    }
    return 0;
}