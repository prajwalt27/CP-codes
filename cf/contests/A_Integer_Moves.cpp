#include<bits/stdc++.h>
using namespace std;

bool isperf(int k)
{
    if(k>=0)
    {
        int s= sqrt(k);
        return s*s==k;
    }
    return false;
}

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     int x,y;
     cin>>x>>y;
     int m = abs(x*x) + abs(y*y);
     if(x==0 && y==0)
     {
         cout<<"0"<<"\n";
     }
     else if(isperf(m))
     {
            cout<<"1"<<"\n";
     }
     else
     {
         cout<<"2"<<"\n";
     }
 }
    return 0;
}