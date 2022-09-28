#include<stdio.h>
int print(int n)
{
    if(n<1)
    {
        return 1;
    }
    else
    {
        printf("\n before = %d",n);
        print(n-1);
        printf("\n after = %d",n);
    }
}
void main()
{
    print(3);
}