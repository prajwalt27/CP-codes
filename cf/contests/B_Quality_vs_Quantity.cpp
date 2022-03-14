#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        lli n;
        cin>>n;
        lli a[n],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            
        } 
        sort(a,a+n);
        long long int p=(n+1)/2 +1;
        lli sumb=a[0],sumr=0;
        bool f=false;
        for(lli i=1;i<n;i++)
        {
            sumb+=a[i];
            sumr+=a[n-i];
            if(sumr>sumb)
            {
                f=true;
                break;;
            }
        }
         
        if(f)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }

    return 0;
}
