#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int r = s[0] + '0';
        r += s[1] + '0';
        r += s[2] + '0';
        int l = s[3] + '0';
        l += s[4] + '0';
        l += s[5] + '0';
        if (l == r)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
