#include<stdio.h>
#include<string.h>
int main()
{   
    //get string
    char s[100];
    scanf("%s",s);
    int n=strlen(s)-1;
    int c=1;
    //check whether 7 same charecters are entered next to one another
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        c++;
        else
        c=1;
        if(c==7)
        {
        printf("YES");
        return 0;
        }
    }
    printf("NO");
    return 0;
    
}

