#include <bits/stdc++.h>
#define int long long
using namespace std;

void next_permutation(int *a, int n)
{
    int j, k, r, s;
    j = n - 2;
    while (a[j] > a[j + 1])
        j--;
    if (j >= 0)
    {
        k = n - 1;
        while (a[j] > a[k])
            k--;
        swap(a[j], a[k]);
        r = j + 1;
        s = n - 1;
        while (r < s)
        {
            swap(a[r], a[s]);
            r++;
            s--;
        }
        for(int i = 0 ; i < n; i++) cout << a[i] << ' ';
    }else{
        for(int i = 1; i <= n; i++) cout << i << ' ';
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // processing...........
        /*
        - tim tu phai qua trai hoan vị có chỉ số j đầu tiên thoa mãn a[j] < a[j+1](hay j là chỉ số lón nhất để a[j] < a[j+1])
        - Tìm a[k] là số nhỏ nhất còn lớn hơn a[j] trong các số ở bên phải a[j]
        - đổi chỗ a[j] và a[k]
        - lật ngược đoạn từ a[j+1] đến a[n]
        */

        next_permutation(a, n);
        cout << endl;

        delete a;
    }
    return 0;
}