#include<stdio.h>
#include<stdlib.h>
int n=10,cnt=0,i,j,k;
void print(int a[])
{
    int i;
    printf("\n%d --> ",++cnt);
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}
void mergesort(int a[],int i,int j)
{
    int mid;
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid);
        mergesort(a,mid+1,j);
        merge(a,i,mid,mid+1,j);
    }
}
void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];
    i=i1;
    j=i2;
    k=0;
    while(i<=j1 && j<=j2)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    while(i<=j1)
    {
        temp[k++]=a[i++];
    }
    while(j<=j2)
    {
        temp[k++]=a[j++];
    }
    for(i=i1,j=0;i<=j2;i++,j++)
    {
        a[i]=temp[j];
    }
}
int main()
{
    int a[25];
    for(i=0;i<n;i++)
    {
        a[i]=rand()%10;
    }
    print(a);
    mergesort(a,0,n-1);
    printf("\n Order Of Sorted Elements : ");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}