#include <stdio.h>
#define n 5
int a[n];
int front = 0, rear = 0, array;
void insert()
{
    printf("\n Enter Array : ");
    scanf("%d", &array);
    if ((rear + 1) % n == front)
    {
        printf("\n Queue is Full!!!");
    }
    else
    {
        rear = (rear + 1) % n; 
        a[rear] = array;
        // printf("\n %d",rear);
    }
}
void delete()
{
    if(front==rear)
    {
        printf("\n Queue is Empty");
        rear=front=0;
    }
    else
    {
        front=(front+1)%n;
        printf("\n %d",rear);
        printf("\n %d",front);
    }
}
void print()
{
    printf("\n");
    int i = front + 1;
    do
    {
        printf("\n a[%d] : %d",i, a[i]);
        i = (i + 1) % n;
    } while (i != (rear + 1) % n);
    printf("\n front = %d \n rear= %d", front, rear);
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n 1.Insert ");
        printf("\n 2.Delete ");
        printf("\n 9.print ");
        printf("\n Enter Your Choice : ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            {
                insert();
                break;
            }
            case 2:
            {
                delete();
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
                printf("\n Enter Please Valid Choice !!!");
            }
        }
    }
}