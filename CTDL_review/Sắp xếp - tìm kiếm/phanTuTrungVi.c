#include<stdio.h>
#include<string.h>
int a[100000];
int findPos(int low, int high, int k){
    if(low > high)  return 0;
    else{
        int mid = (high + low)/2;
        if(k == a[mid]){
            return mid;
        }else{
            if(k < a[mid]) return findPos(low, mid-1, k);
            else if(k > a[mid]) return findPos(mid+1, high, k);
        }
    }
}
int main(){
    int t; scanf("%d", &t);
    int run = 0;
    while(t--){
        char s[10];
        int x;
        scanf("%s", s);
        if(strcmp(s, "add")!=0){
            scanf("%d", &x);
            a[run++] = x;
        }else if(strcmp(s, "del")!=0){
            
        }
    }
}