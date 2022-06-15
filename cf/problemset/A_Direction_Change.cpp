#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n,m;
    cin>>n>>m;
    if(n==1 && m==1){
        cout<<0<<"\n";
    }
    else if(n==1 &&  m>2){
        cout<<-1<<"\n";
    }
    else if(m==1 && n>2){
        cout<<-1<<"\n";
    }
    else{
        long long int x=min(m,n);
        long long int y=(max(m,n)-min(m,n));
        long long int ans=2*(x-1);
        if(y%2==0){
            ans=ans+(4*y/2);
        }
        else{
            ans=ans+(4*y/2)-1;
        }
        cout<<ans<<"\n";
    }
    
    }
}