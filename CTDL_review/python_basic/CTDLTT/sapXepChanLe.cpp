#include<bits/stdc++.h>
using namespace std;
void sortEvenOdd(int *a, int n){
    vector<int> evenArr;
    vector<int> oddArr;
    for(int i = 0 ; i <n; i++){ // le tang, chan giam
        if((i%2)!=0){ // neu i le thi cho vao mang chan va ng lai
            oddArr.push_back(a[i]);
        }else evenArr.push_back(a[i]);
    }
    sort(oddArr.begin(), oddArr.end(), greater<int>());
    sort(evenArr.begin(), evenArr.end());
    int run1 = 0;
    int run2 = 0;

    for(int i = 0 ; i < n; i+=2) a[i] = evenArr[run1++]; 
    for(int i = 1 ; i < n; i+=2) a[i] = oddArr[run2++];

    for(int i = 0 ; i < n; i++) cout << a[i] << ' '; 
    
}
int main(){
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0 ; i < n; i++) cin >> a[i];
    sortEvenOdd(a, n);
    delete a;
    return 0;
}