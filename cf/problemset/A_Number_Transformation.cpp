
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, f;
        cin >> s >> f;
        int flag = 1;
        for (int i = 0; i < f.length(); i++)
        {
            if (f[i] == 'a')
            {
                flag = 0;
            }
        }
        int n = 0;
        for (int i = 0; i < f.length(); i++)
        {
            if (f[i] != 'a')
            {
                n= 1;
            }
        }
        ll ans = pow(2, s.length());
        int na = 0;
        if (f.length() == 1 && n == 0)
        {
            cout << "1" << endl;
        }
        else if (flag == 0 || n == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}