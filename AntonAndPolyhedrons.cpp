/*https://codeforces.com/problemset/problem/785/A*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n][15];
    int sum = 0;
    for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i][0]=='T'){
                sum = sum + 4;
            }
            else if(arr[i][0]=='C'){
                sum = sum + 6;
            }
            else if(arr[i][0]=='O'){
                sum = sum + 8;
            }
            else if(arr[i][0]=='D'){
                sum = sum + 12;
            }
            else if(arr[i][0]=='I'){
                sum = sum + 20;
            }
            
    }
    cout<<sum;
    return 0;
}
