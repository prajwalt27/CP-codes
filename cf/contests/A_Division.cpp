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
        if(1900<=n) 
           cout<<"Division 1"<<"\n";
        if(n<=1899 && n>=1600)
            cout<<"Division 2"<<"\n";
        if(n>=1400 && n<=1599)
           cout<<"Division 3"<<"\n";
        if(n<=1399) 
           cout<<"Division 4"<<"\n";
    }
}