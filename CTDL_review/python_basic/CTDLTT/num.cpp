#include<iostream>
using namespace std;
int rev(int x){
    int res = 0;
    while(x!=0){
        res = res *10 + (x%10);
        x/=10;
    }
    return res;
}
int main(){
    cout << rev(2000);
    return 0;
}