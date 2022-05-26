 
#include <iostream>
using namespace std;
 
int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=0;
        for(int i=n-1;i>0;i--){
            
            while(a[i]<=a[i-1] && a[i-1]!=0){
                a[i-1]=a[i-1]/2;
                sum++;
                
 
 
            }
            if(a[i]==0){
                sum=-1;
                break;
 
            }
        }
        cout<<sum<<endl;
    }
    
	return 0;
}
