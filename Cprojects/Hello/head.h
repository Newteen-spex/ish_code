#ifndef __HEAD_H__
#define __HEAD_H__

#include<stdlib.h>
#include<malloc.h>
#include<stdio.h>
typedef int Elemtype;

typedef struct Node
{
    Elemtype data;
    struct Node *next;
}Node;

Node* CreatLink();
Node* FindMid(Node* h);
void AddNode(Node* h, Elemtype e);
void PrintLink(Node* h);
void ReverseLink(Node* h);

#endif
