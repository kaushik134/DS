#include<stdio.h>
#define n 5
int a[n],pos=-1;
int lastinsert(int val)
{
    if(pos>n)
    {
        printf("\n full !!!");
    }
    else
    {
        a[++pos]=val;
    }
}
void print()
{
    for(int i=0;i<pos;i++)
    {
        printf("\n %d",a[i]);
    }
}
int main()
{
    lastinsert(10);
    lastinsert(20);
    lastinsert(30);
    lastinsert(40);
    lastinsert(50);
    lastinsert(60);
    lastinsert(80);
    lastinsert(70);
    print();
}