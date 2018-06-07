/*to count the minimum number of stones to take from the table the table
if neighboring if there are no other stones between them.*/
#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char str[50];
    int c=0;
    scanf("%d",&n);
    scanf("%s",str);
    for(int i=1;i<strlen(str);i++)
    {
        if(str[i]==str[i-1])
        c++;
    }
    printf("%d",c);
    return 0;
}
