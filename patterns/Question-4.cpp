// Make this pattern
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

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
    int a[n], b[n];

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}