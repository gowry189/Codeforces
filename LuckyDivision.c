/* Queston link --> https://codeforces.com/problemset/problem/122/A <---*/
 
#include <iostream>
#include<string.h>
using namespace std;
int main(){
    int arr[20]={4,7,47,74,477,747,774,447,474,744};
    int a;
    bool flag=false;
    cin>>a;
    for(int i=0;i<10;i++){
        if(a==arr[i]){
            if(a%arr[i]==0){
                flag=true;
            }
        }
    }
    for(int i=0;i<10;i++){
            if(a%arr[i]==0){
                flag=true;
            }
    }
    if(flag==true)
        cout<<"YES";
    else
        cout<<"NO";
return 0;
} 
