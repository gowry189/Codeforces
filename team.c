/*To find the number of questions that a team of 3 people can attempt
 depending on the number of questions they know */
#include<stdio.h>
int main()
{
    int n,p,v,t;
    int c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&p,&v,&t);
        if(p==1&&v==1||v==1&&t==1||t==1&&p==1)
        c=c+1;
    }
    printf("%d",c);
    return 0;
}
