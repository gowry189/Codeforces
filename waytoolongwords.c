/* to form a short code for words having more than 10 letters*/

#include<stdio.h>
#include<string.h>
int main()
{   
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    char s[100];
    scanf("%s",s);
    int len;
    len=strlen(s);

    /*printing the first letter then the number 
   of words in between them and then the last letter of he word*/

    if (len>10)
    printf("%c%d%c\n",s[0],len-2,s[len-1]);
    else 
    printf("%s\n",s);
    }
    return 0;
}
