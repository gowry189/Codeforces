/*to find the maximum number of domino pieces that fit in the rectangular board*/
#include<stdio.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    if(m>=1&&m<=16&&n>=1&&n<=16)
    {
        int p=m*n;
        int a=p/2;
        printf("%d",a);
    }
    return 0;
}
