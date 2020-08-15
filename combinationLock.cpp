/*https://codeforces.com/problemset/problem/540/A*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    string p;
    cin>>s;
    cin>>p;
    int arr[n];
    int pass[n];
    for(int i=0;i<n;i++){
        arr[i]=s[i]-48;
        pass[i]=p[i]-48;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        int a = abs(arr[i]- pass[i]);
        if(a <= 5){
            sum = sum + a; 
        }
        else{
            int b = 10 - a;
            sum = sum + b;
        }
    }
    cout<<sum;
    return 0;
}
