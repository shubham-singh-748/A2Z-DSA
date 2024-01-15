// Make this pattern

//  *
//  * *
//  * * *
//  * * * *
//  * * * * *
//  * * * * * *
//  * * * * * * *
//  * * * * * * * *
//  * * * * * * *
//  * * * * * *
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *


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

    if (n % 2 == 0)
    {
        for (int i = 0; i <= (n / 2) - 1; ++i)
        {
            for (int j = 0; j <= i; ++j)
            {
                cout << " *";
            }
            cout << endl;
        }

        for (int i = (n / 2) + 1; i < n; ++i)
        {
            for (int j = 1; j < (n - i) + 1; ++j)
            {
                cout << " *";
            }
            cout << endl;
        }
    }

    else if (n % 2 != 0)
    {
        for (int i = 0; i <= (n / 2); ++i)
        {
            for (int j = 0; j <= i; ++j)
            {
                cout << " *";
            }
            cout << endl;
        }

        for (int i = (n / 2) + 1; i < n; ++i)
        {
            for (int j = 0; j <= n - (i + 1); ++j)
            {
                cout << " *";
            }
            cout << endl;
        }
    }

    return 0;
}