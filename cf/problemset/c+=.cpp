#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 int t;
 cin>>t;
 while(t--)
 {
     int a,b,n;
     cin>>a>>b>>n;
     int k=(a+b);
     if(k>n)
     {
         cout<<0<<"\n";
     }
     else
     {
         int i=1;
           while(k!=n)
           {
               k+=k*i; 
               i++;
           }
           cout<<i+1<<"\n";
     }
     
 }

    return 0;
}