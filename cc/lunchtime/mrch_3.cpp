#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n; i++)
        {
            cin>>a[i];
        }

        if(n==1)
        {
            cout<<a[0]<<"\n";
        }
        else if(n==2)
        {
            cout<<*min_element(a,a+n)<<"\n";
        }
        else
        {
              if(n%2==0)
              {
                  int k1=0,k2=0;
                  for(int i=(n+1)/2;i<n;i++)
                  {
                      k1+=a[i];
                  }
                  for(int i=0;i<n;i++)
                  {
                      k2+=a[i];
                  }
                  cout<<min(k1,k2)<<"\n";
              }
              else if(n%2!=0 )
              {
                 sort(a,a+n);
                 cout<<a[0]+a[1]<<"\n";
              }
        }
    }
    return 0;
}