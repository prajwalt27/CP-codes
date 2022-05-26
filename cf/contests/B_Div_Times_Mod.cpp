#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i, ans, p, k, n;
    cin >> n >> k;
    for (int i = 1; i <= k - 1; i++)
    {
        if (n % i == 0)
            ans = k * (n / i) + i;
    }
    cout << ans << endl;
}