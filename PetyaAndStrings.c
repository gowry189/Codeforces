/*Question link --> https://codeforces.com/problemset/problem/112/A <--*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int l = a.size();
    for(int i=0;i<l;i++){
        if(a[i]>='A' && a[i]<='Z')
            a[i]+=32;
        if(b[i]>='A' && b[i]<='Z')
            b[i]+=32;
    }
    if(a>b)
        cout<<1;
    else if(a==b)
        cout<<0;
    else
        cout<<-1;
} 
