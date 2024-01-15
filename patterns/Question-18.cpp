// Make this pattern

// F 
// E F 
// D E F 
// C D E F 
// B C D E F 
// A B C D E F 

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
    char getCharNum = (65 + (n - 1));

    for (int i = 0; i < n; ++i)
    {
        for (char j = getCharNum - i; j <= getCharNum; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}