#include<bits/stdc++.h>
using namespace std;

int main()
{

 int t;
 cin>>t;
 while(t--)
 {
      vector<int>a(4);
      for(int i=0;i<4;i++)
      {
          cin>>a[i];
      }
      int k=a[0],ji=0;
      for(int i=1;i<4;i++)
      {
        if(k<a[i])
        {
           ji++;
        }
      }
      cout<<ji<<"\n";

 }
 return 0;
}