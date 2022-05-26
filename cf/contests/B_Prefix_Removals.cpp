# include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while (t--)
    {
       
        string s;
        cin>>s;
        int n=s.size();
        int j=-1;
        unordered_map<char,int> mp;
        for (int i = 0; i <n; i++)
        {
            mp[s[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if(mp[s[i]]==1){
                j=i;
                break;
            }
            else{
                mp[s[i]]--;
            }
        }
        
        string ans;
        for (int  i = j; i <n; i++)
        {
            ans.push_back(s[i]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}