#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int a,b,c,x,y;
         cin>>a>>b>>c>>x>>y;
         if((a+b+c)>=(x+y)  && (a+c)>=x && (b+c)>=y)
         {
             cout<<"YES"<<"\n";
         }
         else
         {
             cout<<"NO"<<"\n";
         }
     }
 }