/*https://codeforces.com/problemset/problem/1399/A*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        sort(arr,arr+a);
        int flag=0;
        for(int i=1;i<a;i++){
          if(arr[i]-arr[i-1]>1){
              flag=1;
              
          }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
