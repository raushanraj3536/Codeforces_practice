#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[k];
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        int maxm=0;
        for(int x:a){
            maxm=max(maxm,x);
        }
        int ans=n-maxm;
        if(ans==0){
            cout<<ans<<endl; continue;
        }
        ans=ans-(k-1);
        ans=ans+n-maxm;
        cout<<ans<<endl;
    }
return 0;
}
