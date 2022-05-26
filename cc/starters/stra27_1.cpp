#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int k=21-(a+b);
        if(k<=10)
        {
            cout<<k<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }
    }
}