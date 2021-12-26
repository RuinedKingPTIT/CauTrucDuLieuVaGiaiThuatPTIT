#include<bits/stdc++.h>
using namespace std;
 
void nextGreater(int arr[], int n, int next[], char order)
{
    stack<int> S;

    for (int i=n-1; i>=0; i--)
    {
        while (!S.empty() &&
              ((order=='G')? arr[S.top()] <= arr[i]:
                           arr[S.top()] >= arr[i]))
            S.pop();
        if (!S.empty())
            next[i] = S.top();
        else
            next[i] = -1;
        S.push(i);
    }
}
 
void nextSmallerOfNextGreater(int arr[], int n)
{
    int NG[n]; 
    int RS[n]; 
 
    nextGreater(arr, n, NG, 'G');
 
    nextGreater(arr, n, RS, 'S');
 
 
    for (int i=0; i< n; i++)
    {
        if (NG[i] != -1 && RS[NG[i]] != -1)
            cout << arr[RS[NG[i]]] << " ";
        else
            cout<<"-1"<<" ";
    }
}

int main()
{
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        nextSmallerOfNextGreater(a, n);
        cout << endl;
    }
    
    return 0;
}