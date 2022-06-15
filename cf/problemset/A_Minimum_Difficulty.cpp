#include <bits/stdc++.h>
using namespace std;
#define furious                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define tcase \
    int t;    \
    cin >> t; \
    while (t--)
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define ll long long
#define vi vector<int>
#define pb push_back

inline int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

bool isPrime(ll x)
{
    for (ll d = 2; d * d <= x; d++)
    {
        if (x % d == 0)
            return false;
    }
    return true;
}

bool isPalindrome(string str)
{
    ll low = 0, high = str.length() - 1;
    while (low < high)
    {
        if (str[low] != str[high])
            return false;
        low++, high--;
    }
    return true;
}

int main()
{

    furious
     int n;
    cin >> n;
    int a[n];
    cin >> a[0];
    int mx = 0;
    int mxi= INT_MAX;
    vi k(n-1);
    rep(i,1,n)
    {
        cin >> a[i];
        k[i] = a[i] - a[i - 1];
        mx = max(mx, k[i]);
    }

    rep(i,2,n)
    {
        mxi = max(min(mxi, k[i] + k[i - 1]), mx);
    }

    cout << mxi << "\n";

    return 0;
}