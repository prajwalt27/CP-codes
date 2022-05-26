#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w;
        cin>>n>>w;
        int arr[n],p=0,k=0;
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
           
        }
        sort(arr,arr+n);
        int j;
        for(j=n-1; j>=0;j--)
        {
            p+=arr[j];
            k++;
            if(p>=w)
            {  
                break;
            }
        }
        cout<<(n-k)<<"\n";
    }
    return 0;
}