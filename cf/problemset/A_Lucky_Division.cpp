#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool j = false;
    if (n % 4 == 0 || n % 7 == 0)
    {
        j = true;
    }
    else
    {
        string s = to_string(n);
        vector<char>kio;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='7' || s[i]=='4')
            {
                kio.push_back(s[i]);
            }
        }
        if(kio.size()==s.size())
        {
          j=true;
        }
    }
    if(j)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }

    return 0;
}
