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
#define repe(i, a, b) for (int i = a; i <= b; i++)
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
        tcase
    {

        int n;
        cin >> n;
        vi a(n), b, c;
        rep(i, 0, n)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                b.push_back(a[i]);
            }
            else
            {
                c.push_back(a[i]);
            }
        }

        rep(i, 0, b.size())
        {
            cout << b[i] << " ";
        }
        rep(i, 0, c.size())
        {
            cout << c[i] << " ";
        }
    }
    return 0;
}