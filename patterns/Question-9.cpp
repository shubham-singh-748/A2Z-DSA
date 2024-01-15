// Make this pattern

//       *
//      * *
//     * * *
//    * * * *
//   * * * * *
//  * * * * * *
// * * * * * * *
// * * * * * * *
//  * * * * * *
//   * * * * *
//    * * * *
//     * * *
//      * *
//       *

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

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; ++j)
        {
            cout << " ";
        }
        cout << "\n";
    }


    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j < n - (2 * i) + (n - 1); ++j)
        {
            cout << "*";
        }
        for (int j = 0; j < i; ++j)
        {
            cout << " ";
        }
        cout << "\n";
    }

    return 0;
}