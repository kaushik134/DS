#include<stdio.h>
#include<stdlib.h>
#define n 5
int a[n];
int i,j,temp;
void array()
{
    for(i=0;i<n;i++)
    {
        a[i]=rand()%10;
    }
    for(i=0;i<n;i++)
    {
        printf("\n a[%d] : %d",i,a[i]);
    }
}
void sort()
{
    printf("\n\n\n Bubble Sorting Accending :");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
            printf("\n a[%d] : %d",i,a[j]);
    }
}
int main()
{
    array();
    sort();
}