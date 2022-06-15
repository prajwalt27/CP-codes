#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    int num_a[a + 10];
    for (int i = 0; i < a; i++)
    {
        cin >> num_a[i];
    }
    cin >> b;
    int num_b[b + 10];
    for (int i = 0; i < b; i++)
    {
        cin >> num_b[i];
    }
    int ans = 0;
    int maxx = -1;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (num_b[j] % num_a[i] == 0)
            {
                maxx = max(maxx, num_b[j] / num_a[i]);
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (num_b[j] % num_a[i] == 0 && num_b[j] / num_a[i] == maxx)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}