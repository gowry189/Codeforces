/*to capitalize the first word in the entered string*/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
        char str[1000];
        scanf("%s",str);
        if(str[0]>='a'&&str[0]<='z')
            str[0]=str[0]-32;
        printf("%s",str);
        return 0;
}
