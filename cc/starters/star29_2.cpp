#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long int t;
   cin>>t;
   while(t--)
   {
       long long int n;
       cin>>n;
       string p;
       cin>>p;
       bool same= false;
       long long int kio,lio;
       for(int i=1;i<=p.length();i++)
       {
           if(p[i]==p[i-1])
           {
               i++;
               kio++;
           }
           else
           {
               kio++;
           }
       }
       cout<<kio<<"\n";
   }
    return 0;
}