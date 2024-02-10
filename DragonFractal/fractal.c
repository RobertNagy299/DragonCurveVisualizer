#include <stdio.h>
#include <malloc.h>
#include "paint.h"
/** Robert Nagy, 2023. November 3. */
typedef struct node{

    char value;
    struct node* next;
} node_t;

node_t* append(node_t* head, char val)
{
    if(head == NULL)
    {
        head = (node_t*)malloc(sizeof(node_t));
        head->next = NULL;
        head->value = val;
        return head;
    }
    else{
        node_t* newhead = head;
        while(head->next != NULL)
        {
            head = head->next;
        }
        node_t* newnode = (node_t*)malloc(sizeof(node_t));
        newnode->value = val;
        newnode->next = NULL;
        head->next = newnode;
        return newhead;

    }

}

void printlist(node_t* head)
{
    while(head!=NULL)
    {
        printf("%c",head->value);
        head=head->next;
    }
    printf("\n");
    return;
}

node_t* clonelist(node_t* head)
{
    node_t* clone = NULL;
    while(head != NULL)
    {
        clone = append(clone,head->value);
        head = head->next;

    }
    return clone;

}

node_t* reverselist(node_t* original_head)
{
    node_t* head = original_head;
    node_t* new = NULL;

    node_t* tmp = head->next;
    head->next = NULL;
    while(tmp != NULL)
    {
        node_t* tmp2 = tmp->next;
        tmp->next = head;
        head=tmp;
        tmp = tmp2;
    }
    
    new = head;
    return new;
}

void freeList(node_t* head){

    node_t* tmp;
    while (head != NULL)
    {
        tmp=head;
        head=head->next;
        free(tmp);
    }
    
}
node_t* createfractallist(node_t* head, int size)
{
    int i = 0;
    while(i < size)
    {
        node_t* original = clonelist(head);
        head = append(head,'L');

        node_t* reversed = reverselist(original);

        node_t* inverse = NULL;
        while(reversed != NULL) 
        {
            if(reversed->value == 'R')
            {
                 inverse = append(inverse, 'L');
            }
            else{
                 inverse = append(inverse, 'R');
            }
            reversed = reversed->next;
        }
       
        while(inverse!=NULL)
        {
            head = append(head, inverse->value);
            inverse = inverse->next;
        }
        freeList(inverse);
        freeList(reversed);
        i++;
    }

    return head;
}
void drawfractal(node_t* head)
{
    while(head != NULL)
    {
        switch(head->value)
        {
            case 'L':{
                left(90);
                forward(10);
            }break;
            case 'R':{
                right(90);
                forward(10);
            }break;
        }
        head = head->next;
    }
}

int main()
{
    node_t* head = NULL;
    head = append(head, 'L');
    int size = 4;
    create_window(1000,1000);

    for(int i = 1; i <= size; i++)
    {
        head = createfractallist(head, i);
        drawfractal(head);
    }

    freeList(head);
    close_window();
    return 0;
}
