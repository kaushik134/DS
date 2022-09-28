#include<stdio.h>
#define n 4
int a[n],i,array;
void inputarray()
{
    for(i=0;i<n;i++)
    {
        printf("\n Enter Array : ");
        scanf("%d",&a[i]);
    }
}
void printarray()
{
    for(i=0;i<n;i++)
    {
        printf("\n a[%d] : %d",i,a[i]);
    }
}
int lsearch()
{
    printf("\n Enter Search : ");
    scanf("%d",&array);
    for(i=0;i<n;i++)
    
        if(a[i]==array)
        
            return i+1;
        
        return -1;
    
}
int main()
{
    int ret;
    inputarray();
    printarray();
    ret = lsearch();
    if(ret<0)
    {
        printf("\n Not Found !!!");
    }
    else
    {
        printf("\n Position = %d",ret);
    }
}