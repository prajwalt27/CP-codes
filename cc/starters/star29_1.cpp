#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int p[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }
        //   sort(p,p+n);
        int k[x];

        for (int i = 1; i <= n; i++)
        {
            if (p[i] < x)
            {
                for(int j=1;j<=i;j++)
                {
                     k[j]=i;
                }
            }
        }
        cout<<*max_element(k, k+x) << "\n";
    }
    return 0;
}