#include <bits/stdc++.h>
using namespace std;

int main()

{

    int y, k, n;

    cin >> y >> k >> n;

    int x = k - y % k;

    if (x + y > n)
         cout << -1 << "\n";

    for (int i = x; i <= n - y; i += k)

        cout << i << " ";

    return 0;
}