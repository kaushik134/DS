#include<stdlib.h>
#include<stdio.h>      
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
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
            printf("\n a[%d] : %d",i,a[i]);
    }
}
int main()
{
    array();
    sort();
}