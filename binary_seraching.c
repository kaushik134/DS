#include <stdio.h>

int a[5] = {11, 22, 33, 44, 55};
int mid, array, l = 0, h = 5;
void print()
{
    for (int i = 0; i < 5; i++)
    {
        printf("\n a[%d] : %d", i, a[i]);
    }
}
int binary_serach()
{
    printf("\n Enter Seraching Number = ");
    scanf("%d", &array);
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == array)
            return mid + 1;
        else if (a[mid] < array)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return -1;
}
int main()
{
    int c;
    print();
    c = binary_serach();
    if (c > 0)

        printf("\n Position = %d", c);

    else

        printf("\n POsition Not Found !!");
}