#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;cin>>n;
    vector<int>coins(n);
    int sum=0;	
    for(int i=0;i<n;i++)
    {
    	cin>>coins[i];
    	sum+=coins[i];
    }
    sort(coins.rbegin(),coins.rend());
    int sum2=0;
    int i=0;
    while(sum2<=(sum-sum2))
    {
    	sum2+=coins[i];
    	i++;
    }
    cout<<i<<'\n';

    
    return 0;
}