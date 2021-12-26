#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;  cin >> n;
    
    vector<int> a(n);
    for(int i = 0 ; i < n; i++)    a[i] = i;
 
    vector<string> resCharactor;
    do{
        string temp = "";
        for(int i = 0 ; i < n; i++)    temp.push_back(char(a[i]+65));
        resCharactor.push_back(temp);
    }while(next_permutation(a.begin(), a.end()));

    vector<string> resNumber;
  
    for(int i = (int)pow(10, n-1); i < (int)pow(10, n); i++){
        bool flag =true;
        int j = i;
        while(j!=0){
            if((j%10)==0 || (j%10) > n){
                flag = false;
                break;
            }
            j/=10;
        }
        if(flag)    resNumber.push_back(to_string(i));
    }
    for(int i = 0 ; i< resCharactor.size(); i++){
        for(int j = 0 ; j < resNumber.size(); j++){
            cout << resCharactor[i] << resNumber[j] << endl;
        }
    }

   
    
    
    return 0;
}