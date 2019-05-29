/* Queston link --> https://codeforces.com/problemset/problem/58/A <---*/
 
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main(){
    string std="hello";
    string check;
    cin>>check;
    int l = check.size();
    int a=0;
    for(int i=0;i<l;i++){
        if(check[i]==std[a]){
            a++;
        }
    }
    if(a==5)
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}
