// Sinh ra ma Gray do dai n
#include <bits/stdc++.h> 
using namespace std;   
void Gray(int n) { 
    // neu n nho hon 0 ta khong co ma nao 
    if (n <= 0) return; 
    vector <string> arr; //tao mang luu ma gray  
    // cac ma gray do dai 1
    arr.push_back("0");  arr.push_back("1");   
    // moi vong lap tiep theo sinh ra 2*i ma gray tu buoc truoc    
    for (int i = 2; i < pow(2,n); i = i*2) { 
        // dua them ma gray truoc do theo thu tu nguoc
        // nhu vay  arr[] co hai lan ma gray 
        for (int j = i-1 ; j >= 0 ; j--) //noi them i ma gray nguoc
            arr.push_back(arr[j]);   //dua them mot lan nguoc lai ma gray
        // cac ma tu 0..i them so 0 o dau
        for (int j = 0 ; j < i ; j++) 
            arr[j] = "0" + arr[j];   
        // cac ma tu i..2*i them so 1 o dau
        for (int j = i ; j < 2*i ; j++) 
            arr[j] = "1" + arr[j]; 
    }   
    // dua ra ket qua  
    for (int i = 0 ; i < arr.size() ; i++ ) 
        cout << arr[i] << " ";
	cout<<endl;
} 
// Test solution 
int main() { 
	int T, n; cin>>T;
	while(T--){
		cin>>n;
		Gray(n);
	}
} 
