#include <bits/stdc++.h>
#define lli long long int
#define vli vector<lli>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        lli n;
        cin >> n;

        lli p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        if (n == 2)
        {
            cout << abs(p[0]) - abs(p[1]) << "\n";
        }
        else
        {
            vli v1, v2;

            for (int i = 1; i <= n; i++)
            {
                if (p[i]%2!=0)
                {
                    v1.push_back(abs(p[i - 1]));
                }
                else
                {
                    v2.push_back(abs(p[i - 1]));
                }
            }
            lli a = accumulate(v1.begin(), v1.end(), 0);
            lli b = accumulate(v2.begin(), v2.end(), 0);
            lli x = *min_element(v1.begin(), v1.end());
            lli y = *max_element(v2.begin(), v2.end());
            if (x > y)
            {
                cout << (a - b) << "\n";
            }
            else
                cout << (a - b) + 2 * (y - x) << "\n";
        }
    }
}