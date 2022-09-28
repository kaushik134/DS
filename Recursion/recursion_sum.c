#include<stdio.h>
int s;
int sum(int n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        s=n+sum(n-1);
        return s;
    }
}
void main()
{
    sum(10);
    printf("\n sum = %d",s);
}