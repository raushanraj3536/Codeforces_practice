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
        if(k==2){
            cout<<a[1]+1<<endl;
        }
        else{
            cout<<n-a[0]<<endl;
        }
    }
return 0;
}
