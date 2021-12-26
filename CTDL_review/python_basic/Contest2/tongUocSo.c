#include<stdio.h>

int tongUoc(int n){
    int tong = 0;
    for(int i = 1; i*i <= n; i++){
        if(n%i==0){
            tong += i;
            if(i!=(n/i) && i!=1)    tong += (n/i);
        }
    }   
    return tong;
}

int check(int n){
    return (tongUoc(n) > n);
}
int min(int a, int b){
    return (a<b)?a:b;
}
int max(int a, int b){
    return (a>b)?a:b;
}
int main(){
    int a, b;   scanf("%d%d", &a, &b);
    int dem = 0;
    for(int i = min(a, b);i <= max(a, b); i++){
        if(check(i))    dem++;
    }
    printf("%d", dem);
    return 0;
}