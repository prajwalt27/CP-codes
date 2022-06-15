#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long s = 1, A = 0, y = 0, x = 0;
        for (long long i = 1; i <= n; i++)
        {
            cin >> x;
            while (x % 2 == 0)
                s *= 2, x /= 2;
            y = max(y, x), A += x;
        }
        cout << A + (s - 1) * y << '\n';
    }
}