/*Question link --> https://codeforces.com/problemset/problem/69/A <--*/
#include <iostream>
using namespace std;
int main(){
    int arr[100][3];
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int xsum=0;
    int zsum=0;
    int ysum=0;
    for(int i=0;i<a;i++){
            xsum=xsum+arr[i][0];
    }
    for(int i=0;i<a;i++){
            ysum=ysum+arr[i][1];
    }
    for(int i=0;i<a;i++){
            zsum=zsum+arr[i][2];
    }
    if(xsum==0 && ysum==0 && zsum==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
return 0;
} 
