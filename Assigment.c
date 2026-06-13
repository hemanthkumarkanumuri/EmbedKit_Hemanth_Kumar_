#include<stdio.h>
#include<stdlib.h>
#define SIZE 8
typedef struct student
{
        int rollno;
        char name[20];
        float marks;
        struct student *next;
}sll;
void add_begin(sll**ptr);
void print_record(sll*ptr);
int main()
{
        int i;
        sll *headptr=0;
        for(i=0;i<SIZE;i++)
          add_begin(&headptr);
        print_record(headptr);
        return 0;
}
void add_begin(sll**ptr)
{
        sll*new;
        new=malloc(sizeof(sll));
        printf("enter the rollno,name,marks");
        scanf("%d%s%f\n",&new->rollno,new->name,&new->marks);
        new->next=*ptr;
        *ptr=new;
}
void print_record(sll*ptr)
{
        if(ptr==0)
        {
                printf("no record is avalible");
        }
        while(ptr)
        {
                printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
                ptr=ptr->next;
        }
}
