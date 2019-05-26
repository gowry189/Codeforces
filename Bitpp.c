/*Question link --> https://codeforces.com/problemset/problem/282/A <--*/
#include<stdio.h>
int main() {
  char arr[10];
  int n,sum=0;
  scanf("%d",&n);
  while(n--)
    {
      scanf(" %s",arr);
    if(arr[1]=='+')
        sum++;
    else
        sum--;
    }
  printf("%d\n",sum);
    return 0;
}
         
