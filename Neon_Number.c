//A neon number is a number where the sum of digits of square of the number is equal to the number. 
#include<stdio.h>
int main()
{
    int n,s=0,a,r;
    scanf("%d",&n);
    a=n*n;
    while(a!=0)
    {
        r=a%10;
        s=s+r;
        a=a/10;
    }
    if (n==s)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}