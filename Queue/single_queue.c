#include <stdio.h>
#define n 5
int a[n];
int rear = -1, front = -1, array, d;
void rearinsert()
{

    printf("\n Enter Array : ");
    scanf("%d", &array);
    if (rear == -1 && front == -1)
    {
        // a[++rear];
        front = rear = 0;
    // printf("\n a[%d] : %d\n",rear,array);
        a[rear] = array;
        // printf("\n \n if = %d",rear);
    }
    else if (rear + 1 == n)
    {
        printf("\n Queue Is Full !!");
        // printf("\n \n else if = %d",rear);
    }
    else
        a[++rear] = array;
    // printf("\n a[%d] : %d\n",rear,array);
    // printf("\n \n else = %d",rear);
}
void frontinsert()
{
    printf("\n Enter Array : ");
    scanf("%d", &array);
    // printf("\n front = %d",front);
    if(front>0)
    {
        // printf("\n front under if = %d",front);
        // printf("\n a[%d] : %d\n",front,array);
        a[--front]=array;
    }
    else
    {
        printf("\n Front Delete Please !!!");
    }
}
void frontdelete ()
{
    if (rear == -1 && front == -1)
    {
        printf("\n Queue is Empty");
    }
    else if (rear == front)
    {
        printf("\n Delete Value = %d\n", a[front]);
        rear = front = -1;
        // printf("\n else if rear = %d",rear);
    }
    else
    {
        printf("\n Delete Value = %d", a[front++]);
    }
}
void reardelete()
{
    // printf("\n rear = %d",rear);
    if(rear>0)
    {
        printf("\n Delete Value = %d\n", a[--rear]);
    }
}
void print()
{
    for (int i = front; i <= rear; i++)
    {
        printf("\n A[%d] : %d", i, a[i]);
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n 1.RearInsert");
        printf("\n 2.FrontDelete");
        printf("\n 3.FrontInsert");
        printf("\n 4.RearDelete");
        printf("\n 9.Print");
        printf("\n 0.Exit");
        printf("\n Enter Your Chooice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            rearinsert();
            break;
        }
        case 2:
        {
            frontdelete ();
            break;
        }
        case 3:
        {
            frontinsert();
            break;
        }
        case 4:
        {
            reardelete();
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