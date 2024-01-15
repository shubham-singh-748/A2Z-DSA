// Make this pattern

// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *

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

    // for first half
    int currVal = n - 2;
    for (int i = 0; i <= n / 2; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            cout << "*";
        }

        for (int j = 0; j <= currVal; ++j)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; ++j)
        {
            cout << "*";
        }
        currVal -= 2;
        cout << endl;
    }

    // for second half
    currVal = 1;
    for (int i = (n / 2) + 1; i < n; ++i)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            cout << "*";
        }

        for (int j = 0; j <= currVal; ++j)
        {
            cout << " ";
        }

        for (int j = 1; j <= n - i; ++j)
        {
            cout << "*";
        }
        // cout << currVal;
        currVal += 2;
        cout << endl;
    }

    return 0;
}