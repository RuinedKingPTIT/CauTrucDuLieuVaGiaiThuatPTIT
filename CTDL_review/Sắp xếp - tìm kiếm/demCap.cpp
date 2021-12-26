
#include<bits/stdc++.h> 
typedef long long int ll;
using namespace std;   
ll count(ll x, ll Y[], ll n, ll NoOfY[]) 
{ 
    // If x is 0, then there cannot be any value in Y such that 
    // x^Y[i] > Y[i]^x 
    if (x == 0) return 0; 
  
    // If x is 1, then the number of pais is equal to number of 
    // zeroes in Y[] 
    if (x == 1) return NoOfY[0]; 
  
    // Find number of elements in Y[] with values greater than x 
    // upper_bound() gets address of first greater element in Y[0..n-1] 
    ll* idx = upper_bound(Y, Y + n, x); 
    ll ans = (Y + n) - idx; 
  
    // If we have reached here, then x must be greater than 1, 
    // increase number of pairs for y=0 and y=1 
    ans += (NoOfY[0] + NoOfY[1]); 
  
    // Decrease number of pairs for x=2 and (y=4 or y=3) 
    if (x == 2)  ans -= (NoOfY[3] + NoOfY[4]); 
  
    // Increase number of pairs for x=3 and y=2 
    if (x == 3)  ans += NoOfY[2]; 
  
    return ans; 
} 

ll countPairs(ll X[], ll Y[], ll m, ll n) 
{ 
    // To store counts of 0, 1, 2, 3 and 4 in array Y 
    ll NoOfY[5] = {0}; 
    for (ll i = 0; i < n; i++) 
        if (Y[i] < 5) 
            NoOfY[Y[i]]++; 
  
    // Sort Y[] so that we can do binary search in it 
    sort(Y, Y + n); 
  
    int total_pairs = 0;
    for (ll i=0; i<m; i++) 
        total_pairs += count(X[i], Y, n, NoOfY); 
  
    return total_pairs; 
} 

int main() { 
	ll *A, *B, m, n, T; cin>>T;
	while(T--){
		cin>>m>>n; A = new ll[m]; B = new ll[n];
		for(ll i=0; i<m; i++) cin>>A[i];
		for(ll i=0; i<n; i++) cin>>B[i];
		cout<<countPairs(A, B, m, n)<<endl;
	}
    return 0;
}

