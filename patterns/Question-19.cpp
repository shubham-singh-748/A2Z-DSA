// Make this pattern

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

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

    int initialValue = 0;

    for (int i = 0; i < n; ++i)
    {
        // for first half
        for (int j = 1; j <= n - i; ++j)
        {
            cout << "*";
        }

        for (int j = 0; j < initialValue; ++j)
        {
            cout << " ";
        }

        for (int j = 1; j <= n - i; ++j)
        {
            cout << "*";
        }
        initialValue += 2;
        cout << endl;
    }

    // for second half
    initialValue = 2 * n;
    for (int i = 1; i <= n; ++i)
    {

        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }

        for (int j = 1; j < initialValue - 1; ++j)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        initialValue -= 2;
        cout << endl;
    }

    return 0;
}