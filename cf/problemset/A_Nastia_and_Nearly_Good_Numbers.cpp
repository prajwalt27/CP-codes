#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        if(y==1)
        {
            cout<<"NO"<<"\n";
        }
        else
        {
            cout<<"YES"<<"\n";
            long long sum = (x*y*2);
            long long b = sum-x;
            cout<<x<<" "<<b<<" "<<sum<<"\n";
        }

    }
}