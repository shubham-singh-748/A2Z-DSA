// Make this 

// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
// 0 1 0 1 0 1 
// 1 0 1 0 1 0 1 
// 0 1 0 1 0 1 0 1 

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
        int val = 1;
        if (i % 2 == 0)
        {
            val = 1;
        }
        else
        {
            val = 0;
        }
        for (int j = 0; j <= i; ++j)
        {
            cout << val << " ";
            val = 1 - val;
        }
        cout << endl;
    }

    return 0;
}