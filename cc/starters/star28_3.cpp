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
        int p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        int k = 0;
        vector<int> r;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; i < =30; i++)
                if (p[i] != 6 && p[i] != 13 && p[i] != 20 && p[i] != 27 && p[i] % 7 == 0)
                {
                    k++;
                }
        }
        int f = r.size();
        if (k >= 1)
        {
            cout << 8 + f << "\n";
        }
        else
        {
            cout << 8 << "\n";
        }
    }
}