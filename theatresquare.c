/*Rectangular size of nxm and a square of width a is entered.
 Found the least number of squares that fit in the rectangular theatre*/

#include <stdio.h>
int main()
{
    long int n;
    long int m;
    long int a;
    scanf ("%ld %ld %ld", &n, &m, &a);
    long long int l=0;
    if(n%a==0)
    {
     //checking if the square completly fits the rectangles length
     l=n/a;
    }
    else
    {
     //else adding one
     l=n/a;
     l++;
    }
    long long int b=0;
    if(m%a==0)
    {
     //checking if the square completly fits the breadth length
     b=m/a;
    } 
    else 
    {
     //else adding one
     b=m/a;
     b++;
    }

    //total number of squares in the entire rectangular theatre
    long long int  z=0;
    z=l*b;
    printf("%lld",z);
    return 0;
}
