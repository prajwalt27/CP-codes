#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll b,c;
        cin>>b>>c;
        int k=gcd(b,c);
        cout<<c/k<<"\n";
    }
}


