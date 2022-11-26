#include"head.h"

int main()
{
    Node* L = CreatLink();
    AddNode(L, 1);
    AddNode(L, 2);
    AddNode(L, 3);
    AddNode(L, 4);
    AddNode(L, 5);
    Node* f = FindMid(L);
    printf("The mid is %d.\n", f->data);
    PrintLink(L);
    printf("\n");
    ReverseLink(L);
    PrintLink(L);

    return 0;
}
