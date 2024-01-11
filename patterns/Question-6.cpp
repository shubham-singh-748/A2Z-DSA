// Make this pattern
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int cnt = 1;
    int a[n], b[n];

    for (int i = 1; i <= n; ++i)
    {
        for (int j = n; j > n - (n - i + 1); --j)
        {
            cout << cnt++ << " ";
        }
        cnt = 1;
        cout << "\n";
    }

    return 0;
}