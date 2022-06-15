#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        p[i] -= 25;
    }
    int s = 0, k = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (flag == 0)
        {
            if (p[i] == 0)
            {
                s++;
            }
            else if (p[i] == 25)
            {
                k++;
                if (s >= 1)
                {
                    s--;
                }
                else
                {
                    flag = 1;
                }
            }
            else if (p[i] = 75)
            {
                if (s >= 1 && k >= 1)
                {
                    s--;
                    k--;
                }
                else if (s >= 3)
                {
                    s -= 3;
                }
                else
                {
                    flag = 1;
                }
            }
        }
    }
    if (flag == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}