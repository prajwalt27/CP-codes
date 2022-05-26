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
       int k=0,p[n];
       for(int i=0;i<n;i++)
       {
           cin>>p[i];
       }
       for(int i =0;i<n;i++)
       {
             if(p[i]>=10 && p[i]<=60)
             {
                 k++;
             }
       }
       cout<<k<<"\n";
   }
    return 0;
}