#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while((a>=10)&&(a<=999))
    {
        if(a%2==0)
        {
        printf("0");
        break;
        }
        else
        {
        printf("1");
        break;
        }
    }
}    
