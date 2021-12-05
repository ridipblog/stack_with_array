#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int arr[MAX],top=-1;
void push(int arr[],int val)
{
    if(top==MAX-1)
    {
        printf("\nstack is full");
    }
    else
    {
        top++;
        arr[top]=val;
    }
}
void pop(int arr[])
{
    if(top==-1)
    {
        printf("\nstack is empty");
    }
    else
    {
        printf("\nRemove %d",arr[top]);
        arr[top]=NULL;
        top--;
    }
}
int peek(int arr[],int index)
{
    if(top==-1)
    {
        printf("\nstack is empty ");
        return 0;
    }
    else
        return arr[index-1];
}
void display(int arr[],int top)
{
    if(top==-1)
        printf("\nstack is empty");
    else
        for(int i=top;i>=0;i--)
        {
            printf("\n%d ",arr[i]);
        }
}
int main()
{
    int option,val;
    while(1)
    {
        printf("\nChoose Option ");
        printf("\n1 for exit ");
        printf("\n2 for insert value ");
        printf("\n3 for remove value ");
        printf("\n4 for display value");
        printf("\n5 for display all value ");
        scanf("%d",&option);
        if(option==1)
        {
            break;
        }
        else if(option==2)
        {
            while(1)
            {
                printf("\n0 for exit ");
                printf("\nEnter Data");
                scanf("%d",&val);
                if(val==0)
                    break;
                else
                    push(arr,val);
            }
        }
        else if(option==3)
        {
            pop(arr);
        }
        else if(option==4)
        {
            int index;
            printf("\nEnter index ");
            scanf("%d",&index);
            printf("\nItem %d",peek(arr,index));
        }
        else if(option==5)
        {
            display(arr,top);
        }
        else
        {
            printf("Wrong Choose");
        }
    }
    return 0;
}
