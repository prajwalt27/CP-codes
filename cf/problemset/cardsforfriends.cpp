#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        lli w = 0, h = 0, n = 0;
        cin >> w >> h >> n;
        if (n == 1)
        {
            cout << "YES"<< "\n";
            continue;
        }

        lli cards = 1;
        while (w % 2 == 0)
        {
            cards *= 2;
            w = w / 2;
        }
        while (h % 2 == 0)
        {
            cards *= 2;
            h = h / 2;
        }
        if (n<= cards)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}