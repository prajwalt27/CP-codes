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
        int k=0;
        if(n%4==0)
        {
            k++;
        }
        if(k>0) cout<<"Good"<<"\n";
        else cout<<"Not Good"<<"\n";
    }
}
