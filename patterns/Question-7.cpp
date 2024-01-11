// Make this pattern
//       *
//      * *
//     * * *
//    * * * *
//   * * * * *
//  * * * * * *
// * * * * * * *

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

    for (int i = 1; i <= n - (n / 2); ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (((j >= (n / 2)) || (j <= (n / 2))) &&
                ((j >= (n - (n / 2 + n / 3))) || (j <= n - (n / 2))) &&
                ((j >= (n - ((n / 2 + n / 3) - (n / 2 - n / 3)))) || (j <= n - (n / 3))) &&
                ((j >= (n - ((n + 2 + n / 3) + (n / 3)))) || (j <= (n - ((n / 2) - (n / 3))))))
            {
                cout << "* ";
            }
        }
        cout << "\n";
    }

    return 0;
}