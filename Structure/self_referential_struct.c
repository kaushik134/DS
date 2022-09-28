#include<stdio.h>
struct node
{
    int a;
    char ch;
    struct node *ptr;
};
int main()
{
    struct node var1;
    struct node var2;
    
    var1.a=65;
    var1.ch='A';
    var1.ptr=NULL;

    var2.a=66;
    var2.ch='B';
    var2.ptr=NULL;

    var1.ptr=&var2;
    var2.ptr=&var1;
    printf("\n %d %c",var1,var1);
    printf("\n %d %c",var2,var2);

    printf("\n %d %c",var1.ptr->a,var1.ptr->ch);
    printf("\n %d %c",var2.ptr->a,var2.ptr->ch);


    printf("\n Address Of Var1 : ");
    printf(" %d",var1.ptr=&var1);
    printf("\n Address Of Var2 : ");
    printf(" %d",var2.ptr=&var2);
}