#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int pio[k];
        vector<int>ll;
        for (int i = 0; i < k; i++)
        {
            cin >> pio[i];
        }
        int maxi = *max_element(pio, pio + k);
        int flag=0;
        for (int i = 1; i < maxi; i++)
        {
            int x=pio[i]-1;
            int y=pio[i]+1;
            if(x==pio[i] )
            {
                flag=1;
            }
            if(y==pio[i])
            {
                flag=1;
            }
        }
        cout<<"\n";
    }
}