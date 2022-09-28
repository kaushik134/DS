#include<stdio.h>
int x=1;
int rec(int n)
{
    printf("\n Winding : %d",n);
    if(n<3)
    {
        ++x;
        rec(n+1);
    }
    printf("\n Unwinding : %d",n);
}
int main()
{
    rec(1);
}