#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int cnt = 1;
    for (int i = 1; i <= str.length(); i++)
    {
        if (str[i] == str[i - 1])
        {
            cnt++;
            if (cnt == 7)
            {
                cout << "YES" << "\n";
                return 0;
            }
        }
        else
        {
             cnt= 1;
        }
    }
    cout << "NO" << "\n";
    return 0;
}