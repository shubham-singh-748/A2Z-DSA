// Make this pattern

// ***********
// *         *
// *         *
// *         *
// *         *
// *         *
// *         *
// *         *
// *         *
// *         *
// ***********

#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

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

    int constVal = 1;

    for (int i = 0; i < n; ++i)
    {
        // for top most row
        if (i == 0)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << "*";
            }
        }

        // for lowest row
        else if (i == (n - 1))
        {
            for (int j = 0; j < n; ++j)
            {
                cout << "*";
            }
        }
        else
        {
            // for stars
            for (int j = 0; j < constVal; ++j)
            {
                cout << "*";
            }

            // for spaces
            for (int j = 1; j <= n - 2; ++j)
            {
                cout << " ";
            }

            // for stars
            for (int j = 0; j < constVal; ++j)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}