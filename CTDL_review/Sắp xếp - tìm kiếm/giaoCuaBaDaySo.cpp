#include <bits/stdc++.h>
#define int long long int
using namespace std;
void findCommon(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3){
    int i = 0, j = 0, k = 0;
    int prev1, prev2, prev3;
    int dem =  0;
    prev1 = prev2 = prev3 = INT_MIN;
    while (i < n1 && j < n2 && k < n3)
    {
        while (ar1[i] == prev1 && i < n1)    i++;
        while (ar2[j] == prev2 && j < n2)    j++;
        while (ar3[k] == prev3 && k < n3)    k++;
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]){
            cout << ar1[i] << " ";
            dem++;
            prev1 = ar1[i];
            prev2 = ar2[j];
            prev3 = ar3[k];
            i++;
            j++;
            k++;
        }
        else if (ar1[i] < ar2[j]){
            prev1 = ar1[i];
            i++;
        }
        else if (ar2[j] < ar3[k]){
            prev2 = ar2[j];
            j++;
        }
        else{
            prev3 = ar3[k];
            k++;
        }
    }
    if(dem==0) cout << -1;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N1, N2, N3;
        cin >> N1 >> N2 >> N3;
        int X1[N1], X2[N2], X3[N3];
        for (int i = 0; i < N1; i++)    cin >> X1[i];
        for (int i = 0; i < N2; i++)    cin >> X2[i];
        for (int i = 0; i < N3; i++)    cin >> X3[i];
        findCommon(X1, X2, X3, N1, N2, N3);
        cout << endl;
    }
    return 0;
}