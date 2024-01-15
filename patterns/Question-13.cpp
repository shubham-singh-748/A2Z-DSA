// Make this pattern

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15

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
    int cnt = 1;
    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < i + 1; ++j)
        {
            cout << cnt++ << " ";
        }
        cout << endl;
    }
}
