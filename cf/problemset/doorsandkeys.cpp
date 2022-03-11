#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int f1=0,f2=0,f3=0,k1=0,k2=0,k3=0;
        for(int i=0;i<6;i++)
        {
            if(str[i]=='r') f1=i;
            else if(str[i]=='g') f2=i;
            else if(str[i]=='b') f3=i;
            else if(str[i]=='R') k1=i;
            else if(str[i]=='G') k2=i;
            else if(str[i]=='B') k3=i;
        }
        if(f1>k1 || f2>k2 || f3>k3)
        {
            cout<<"NO"<<"\n";
        }
        else
        {
            cout<<"YES"<<"\n";
        }
    }
}