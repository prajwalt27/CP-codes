#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;
        double k= n/10;
        double result= ceil(k);
        cout<<result<<"\n";
    }
}