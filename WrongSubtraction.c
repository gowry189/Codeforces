 
#include<bits/stdc++.h>
#define ll long long
#include <string>
using namespace std;

int main() {
    ll n;
    int k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        if(n<10){
            n=n-1;
        }
        else if((n%10) == 0){
            n = (n/10);
        }
        else{
           n = n-1; 
        }
    }
    cout<<n;
    return 0;
}
