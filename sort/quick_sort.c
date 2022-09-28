#include<stdio.h>
#include<stdlib.h>
int n=10,cnt=0,i,j,pivot,temp;
void print(int a[])
{
    int i;
    printf("\n%d --> ",++cnt);
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}
void quicksort(int a[],int first,int last)
{
    if(first<last)
    {
        printf("\n Inside Quick : ");
        print(a);
        pivot=first;
        i=first;
        j=last;

        while(i<j)
        {
            while(a[i]<=a[pivot]&&i<last)
                i++;
            while(a[j]>a[pivot])
                j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
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
    quicksort(a,0,n-1);
    printf("\n Order Of Sorted Elements : ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}