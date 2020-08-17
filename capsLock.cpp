/*https://codeforces.com/problemset/problem/131/A*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n= s.length();
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        if(isupper(s[i])){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
        sum+=arr[i];
    }
    if(sum==0){
        for(int i=0;i<n;i++){
            s[i]+=32;
        }
    }
    if(sum == 1 && islower(s[0])){
        if(!isupper(s[0])){
        s[0]-= 32;
        }
        for(int i=1;i<n;i++){
        if(isupper(s[i])){
            s[i]+=32;
            }
        }
    }
    cout<<s;
    return 0;
}

