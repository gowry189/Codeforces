/*Question link --> https://codeforces.com/problemset/problem/236/A <--*/
#include <iostream>
#include<string.h>
using namespace std;
int main(){
    int l,count=0,i; 
    string s;
    cin>>s; 
    l=s.length(); 
    sort(s.begin(),s.end()); 
    for (i = 1;i<l; i++){
    if (s[i] != s[i -1] ){
        count++;
   } 
 }
if((count+1)%2==0){
       cout<<"CHAT WITH HER!";
    } 
 else{
        cout<<"IGNORE HIM!"<<endl;
    } 
return 0; 
}

 
