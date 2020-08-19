#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n= s.length();
    int sum=0;
    char start = 'a';
    for(int i=0;i<n;i++){
       int a = abs(s[i]-start);
       if(a>13){
           sum=sum+abs(a-26);
       }
       else{
           sum=sum+a;
       }
       start=s[i];
    }
    cout<<sum;
    return 0;
}
