#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;
    int pas = 1, num;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                num++;
            }
        }
        if (num == 0)
        {
            pas++;
        }
        num = 0;
    }
    if (pas % 2 == 0)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
}
