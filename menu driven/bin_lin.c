#include <stdio.h>

int a[5];
int mid, array, l = 0, h = 5, temp;
void print()
{
    for (int i = 0; i < 5; i++)
    {
        a[i] = rand() % 10;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
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
    printf("\n acs");
    return -1;
}
int lsearch()
{
    printf("\n Enter Search : ");
    scanf("%d", &array);
    for (int i = 0; i < 5; i++)

        if (a[i] == array)

            return i + 1;

    return -1;
}
int main()
{
    int ch, liner, binary;
    while (1)
    {
        printf("\n 1. Liner Seraching ");
        printf("\n 2.Binary Seraching ");
        printf("\n 3.print Array ");
        printf("\n 0.Exit \n");
        printf("\n Enter Your Chooice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            liner = lsearch();
            if (liner < 0)
            {
                printf("\n Not Found !!!");
            }
            else
            {
                printf("\n Position = %d", liner);
            }
            break;
        }
        case 2:
        {
            binary = binary_serach();
            if (binary > 0)
                printf("\n Position = %d", binary);
            else
                printf("\n POsition Not Found !!");
            break;
        }
        case 3:
        {
            print();
            break;
        }
        case 0:
        {
            return 0;
        }
        }
    }
}