#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli t;
    cin >> t;
    while (t--)
    {
        lli n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        lli kio= k,lio=0;
     
        for (int i = 0; i < n; i++)
        {
            if (kio>= a[i])
            {
                kio = kio - a[i];
                lio++;
            }
            else
            {
                if (kio>= ((a[i] + 1) / 2))
                {
                    lio++;
                    break;
                }
            }
        }

        cout << lio<<"\n";
    }
}
