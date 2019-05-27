/* Question link --> https://codeforces.com/problemset/problem/118/A <-- */ 

#include<stdio.h>
#include<string.h>
int main() {
  char a[100];
  scanf("%s",a);
  int l = strlen(a);
  for(int i = 0;i < l;i++){
    if(a[i] != 'a' && a[i] != 'A' && a[i] != 'e' && a[i] != 'E' && 
    a[i] != 'i' && a[i] != 'I' && a[i] != 'o' && a[i] != 'O' && 
    a[i] != 'u' && a[i] != 'U' && a[i] != 'y' && a[i] != 'Y'){
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;
        printf(".%c",a[i]);
    }
  }
    return 0;
}
         
