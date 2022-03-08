#include<bits/stdc++.h>
using namespace std;

int main()
{
   
   int n;
   cin>>n;
   if(n%2==0)
   {
       cout<<-1<<"\n";
       continue;
   }
    int k=n/2;
   cout<<0<<" "<<k<<"\n";
   cout<<k<<" "<<0<<"\n";
   cout<<0<<" "<<-(k)<<"\n";
   cout<<-(k)<<" "<<0<<"\n";

}