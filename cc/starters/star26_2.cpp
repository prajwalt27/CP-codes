#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;cin>>t;

    while(t--)
    {
        int n,x;
        cin>>n>>x;int arr[n];
        int sum=x;
        vector<int>v;v.push_back(x);
        for (int i = 0; i <n; i++)
        {
            cin>>arr[i];
             sum=sum+arr[i];
            v.push_back(sum);
        }
       sort(v.begin(),v.end());
       cout<<v[v.size()-1]<<endl;
    }
    return 0;
}