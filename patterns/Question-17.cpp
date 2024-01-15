// Make this pattern

//        A       
//       ABA      
//      ABCBA     
//     ABCDCBA    
//    ABCDEDCBA   
//   ABCDEFEDCBA  
//  ABCDEFGFEDCBA 

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
    char alphabet = 'A';

    for (int i = 0; i < n; ++i)
    {
        int breakPoint = ((2 * i) + 1) / 2;
        for (int j = 0; j <= n - i - 1; ++j)
        {
            cout << " ";
        }

        for (int j = 0; j < (2 * i) + 1; ++j)
        {
            if (j < breakPoint)
            {
                cout << alphabet++;
            }
            else
            {
                cout << alphabet--;
            }
        }
        alphabet = 'A';

        for (int j = 0; j <= n - i - 1; ++j)
        {
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}