#include "list.h"

List *listInit()
{
    List *phead = ( List * )malloc(sizeof(List));
    if ( phead == NULL )
    {
	printf("MALLOC ERROR!\n");
	exit(-1);
    }
    phead->prev = phead;
    phead->next = phead;
    return phead;
}

List *newNode(DataType val)
{
    List *node = ( List * )malloc(sizeof(List));
    if ( node == NULL )
    {
	printf("MALLOC ERROR!");
	exit(-1);
    }
    node->prev = NULL;
    node->val = val;
    node->next = NULL;
    return node;
}

void insertList(List *key, DataType val)
{
    List *node = newNode(val);
    key->prev->next = node;
    node->prev = key->prev;

    key->prev = node;
    node->next = key;
}

DataType popList(List *key, DataType val)
{




    return val;
}

void pushBack(List *ptr, DataType x)
{
    assert(ptr);
    List *tail = ptr->prev;
    List *node = newNode(x);
    tail->next = node;
    node->prev = tail;
    node->next = ptr;
    ptr->prev = node;
}

void popBack(List *ptr)
{
    assert(ptr);
    assert(ptr->next != ptr);
    List *tail = ptr->prev;
    tail->prev->next = ptr;
    ptr->prev = tail->prev;
    free(tail);
}

void pushFornt(List *ptr, DataType x)
{

}

void popFornt(List *ptr)
{

}

void printList(List *ptr)
{
    List *temp = ptr->next;
    while ( temp != ptr )
    {
	printf("%d ", temp->val);
	temp = temp->next;
    }
}
