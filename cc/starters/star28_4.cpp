#include <bits/stdc++.h>
using namespace std;

void Hello(int n)
{
        int npt=n-6;
        if (n == 2)
        {
            cout << -1 << "\n";
        }
        else if (n == 4)
        {
            cout << 3 << " " << 2 << " " << 4 << " " << 1 << "\n";
        }
        else if (n & 1)
        {
            for (int i = n; i >= 1; i--)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << 5 + npt << " " << 2 + npt << " " << 3 + npt << " " << 6 + npt << " " << 4 + npt << " " << 1 + npt << " ";
            for (int i = npt; i >= 1; i--)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Hello(n);
        
    }
    return 0;
}