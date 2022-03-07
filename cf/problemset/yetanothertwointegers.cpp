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
        int moves=0;
        if(a==b)
        {
            cout<<0<<"\n";
        }
        else if(a>b)
        {
            for(int i=1;i<=10;i++)
            {
                a-=i;
                moves++;
                if(a==b)
                {
                    break;
                }

            }
            cout<<moves<<"\n";
        }
        else if(a<b)
        {
            for(int i=1;i<=10;i++)
            {
                a+=i;
                moves++;
                if(a==b)
                {
                    break;
                }

            }
            cout<<moves<<"\n";
        }
        
        
    }
    return 0;
}