#include<bits/stdc++.h>
using namespace std;
int32_t main() {
    int n, r;
    cin >> n >> r;
    vector<bool> v(n);
    fill(v.end() - r, v.end(), true);
    do {
        for (int i = 0; i < n; i++) {
            if (v[i]) {
                cout << i+1 << " ";
            }
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    return 0;
}
