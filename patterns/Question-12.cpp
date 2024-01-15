// Make this pattern

// 1          1
// 12        21
// 123      321
// 1234    4321
// 12345  54321
// 123456654321

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

    int n;
    cin >> n;
    int cnt = 1, cnt2 = 1;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < (i + 1); ++j)
        {
            cout << cnt++;
        }
        cnt = 1;

        for (int j = 0; j < ((2 * n) - (2 * i) - 2); ++j)
        {
            cout << " ";
        }

        for (int j = i + 1; j > 0; --j)
        {
            cout << j;
        }
        cout << endl;
    }
}
