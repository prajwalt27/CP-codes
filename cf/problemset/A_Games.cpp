#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num=0;
    vector<int>kio(n);
    vector<int>jio(n);

    for(int i=0;i<n;i++)
    {
        cin>>kio[i]>>jio[i];
        for(int j=0;j<i;j++)
        {
            if(kio[i]==jio[j])
            {
                num++;
            }
            if(jio[i]==kio[j])
            {
                num++;
            }      
        }
    }
    cout<<num<<"\n";

    return 0;
}