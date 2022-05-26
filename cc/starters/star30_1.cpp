#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,k;
        cin>>n>>x>>k;
        if(n>k)
        {
            cout<<k/x<<"\n";
        }
        else
        {
            cout<<n<<"\n";
        }
    }

    return 0;
}