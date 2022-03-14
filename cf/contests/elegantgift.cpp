#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<1<<"\n";
        }
        else if(n==2)
        {
            cout<<2<<"\n";
        }
        else
        { 
            if(n%2==0)
            {   
                cout<<1;
                for(int i=1;i<=n;i++)
                {
                    if(i%2==0)
                    {
                        cout<<i;
                    }
                }
                cout<<1;
            }
            else
            {
                cout<<2;
                for(int i=1;i<n;i++)
                {
                    if(i%2!=0)
                    {
                        cout<<i;
                    }
                }
                cout<<2;
            }
        }
    }
}