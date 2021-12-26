#include<stdio.h>

int res = -1;

void findPos(int *a, int low, int high, int k){
    if(low > high)  return;
    else{
        int mid = (high + low)/2;
        if(k == a[mid]){
            res = mid+1;
            return;
        }else{
            if(k < a[mid]) return findPos(a, low, mid-1, k);
            else if(k > a[mid]) return findPos(a, mid+1, high, k);
        }
    }
}
int main(){
    int t;  scanf("%d", &t);
    while(t--){
        res = -1;
        int n, k;
        scanf("%d%d", &n, &k);
        int a[n];
        for(int i = 0 ; i < n; i++) scanf("%d", &a[i]);
        findPos(a, 0, n-1, k);
        if(res == -1)   printf("NO\n");
        else printf("%d\n", res);
       
    }
    return 0;
}