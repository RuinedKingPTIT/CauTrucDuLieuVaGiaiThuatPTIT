#include<stdio.h>
int max(int a, int b, int c){
    int temp = (a > b) ? a : b;
    return (temp > c) ? temp : c;  
}
int maxCrossingSum(int *a, int low, int mid, int high){
    int sum = 0;
    int sum_left = -10000000;
    int sum_right = -10000000;
    for(int i = mid; i >= low; i--){
        sum += a[i];
        if(sum > sum_left)  sum_left = sum;
    }
    sum = 0;
    for(int i = mid+1; i <= high; i++){
        sum += a[i];
        if(sum > sum_right)  sum_right = sum;
    }
    return sum_left + sum_right;
}
int maxSubArraySum(int *a, int low, int high){
    if(low == high) return a[low];
    int mid = (low+high)/2;
    return max(maxSubArraySum(a, low, mid), maxSubArraySum(a, mid+1, high), maxCrossingSum(a, low, mid, high));
}
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int a[n];
        for(int i = 0 ; i < n; i++) scanf("%d", &a[i]);
        printf("%d\n", maxSubArraySum(a, 0, n-1));
    }
    return 0;
}