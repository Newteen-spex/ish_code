#include"head.h"

Node* CreatLink()
{

    Node* head = malloc(sizeof(Node));
    head->next = NULL;
    return head;

}

Node* FindMid(Node* h)
{
    Node* p, *q;
    p = h->next;
    q = p->next;
    while(q->next != NULL)
    {
        p = p->next;
	q = q->next;
	if(q->next != NULL)
	{
            q = q->next;
	}
    }
    return p;
}

void AddNode(Node* h, Elemtype e)
{

    Node* tmp = malloc(sizeof(Node));
    tmp->data = e;
    tmp->next = NULL;
    
    Node* p = h;
    while(p->next != NULL)
    {
        p = p->next;
    }
    p->next = tmp;

}

void PrintLink(Node* h)
{
    Node* p = h->next;
    while(p != NULL)
    {
        printf("%d ", p->data);
	p = p->next;
    }

}

void ReverseLink(Node* h)
{
    Node* p, *q , *r;
    p = h;
    q = p->next;
    p->next = NULL;
    while(q != NULL)
    {
        r = q->next;
	q->next = p->next;
	p->next = q;
	q = r;
    }

}

