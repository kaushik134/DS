#include <stdio.h>
#define n 3
int a[n], pos = -1, b, i, md, p;
int lastinsert(int val)
{
    if (pos >= n)
    {
        printf("\n full !!!");
    }
    else
    {
        a[++pos] = val;
    }
    printf("\n top : %d", pos);
}
void print()
{
    for (i = 0; i <= pos; i++)
    {
        printf("\n a[%d] : %d", i, a[i]);
    }
}
void lastdelete()
{
    if (pos < 0)
    {
        printf("\n Array is Empty");
    }
    else
    {
        b = a[pos--];
    }
}
void firstinsert(int val)
{
    if (pos >= n)
    {
        printf("\n full !!!");
        printf("\n Any one element delete please");
    }
    else
    {
        for (i = pos; i >= 0; i--)
        {
            a[i + 1] = a[i];
        }
        pos++;
        a[i + 1] = val;
    }
}
void firstdelete()
{
    for (i = 0; i <= pos; i++)
    {
        a[i - 1] = a[i];
    }
    pos--;
    a[i];
}
void middleinsert()
{
    printf("\n Enter the Position : ");
    scanf("%d", &p);
    printf("\n Enter Middle Array : ");
    scanf("%d", &md);
    // printf("\n%d",pos);
    for (i = pos; i >= p; i--)
    {
        a[i + 1] = a[i];
        printf("\n %d", i);
    }
    pos++;
    a[i + 1] = md;
}
void middledelete()
{
    printf("\n Enter the Position : ");
    scanf("%d", &p);
    for (i = p; i <= pos; i++)
    {
        a[i - 1] = a[i];
    }
    pos--;
    // a[i];
}
int main()
{
    int ch, array, f;
    while (1)
    {
        printf("\n 1.LastInsert ");
        printf("\n 2.LastDelete ");
        printf("\n 3.FirstInsert");
        printf("\n 4.FirstDelete");
        printf("\n 5.MiddleInsert");
        printf("\n 6.MiddleDelete");
        printf("\n 9.Print ");
        printf("\n 0.Exit");
        printf("\n Enter Chooice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("\n Enter Araay = ");
            scanf("%d", &array);
            lastinsert(array);
            break;
        }
        case 2:
        {
            lastdelete();
            break;
        }
        case 3:
        {
            printf("\n Enter FirstInsert = ");
            scanf("%d", &f);
            firstinsert(f);
            break;
        }
        case 4:
        {
            firstdelete();
            break;
        }
        case 5:
        {
            middleinsert();
            break;
        }
        case 6:
        {
            middledelete();
            break;
        }
        case 9:
        {
            print();
            break;
        }
        case 0:
        {
            return 0;
        }
        default:
        {
            printf("\n Invalid Choice !!!");
        }
        }
    }
}