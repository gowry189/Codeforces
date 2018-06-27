#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
char s2[1000]="I hate";
char s1[1000]="I love";
for(int i=0;i<n;i++)
{
    if((i%2)!=0)
    printf("%s ",s1);
    else
    {
        printf("%s ",s2);
    }
    if (i!=n-1)
    printf("that ");
}
printf("it");
return 0;
}
