#include <stdio.h>
int main()
{
    int a[] = {11, 22, 33, 44,55};
    int i;
    i=sizeof(a)/sizeof(a[1]); // 4*5=20/4
    
    printf("\n %d",i);
}