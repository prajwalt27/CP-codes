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
        string s;
        cin>>s;
        int flag=1,flog=0,flig=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                flag++;
            }
          
        }
           cout<<flag<<"\n";
        
       
    }
}