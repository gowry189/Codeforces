/* Queston link -->https://codeforces.com/problemset/problem/758/A <---*/

#include<bits/stdc++.h>
#define ll long long
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0;i < n;i++){
       cin >> arr[i];
    }
    int arrmax = arr[0];
    for(int i = 1;i < n;i++){
        if(arrmax < arr[i]){
            arrmax = arr[i];
        }
    }
    int sum = 0;
    for(int i = 0;i < n;i++){
        sum += (arrmax-arr[i]);
    }
    cout << sum;
    return 0;
} 
