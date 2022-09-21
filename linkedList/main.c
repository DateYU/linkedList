#include "list.h"

void testList()
{
    List *plist = listInit();
    pushBack(plist, 1);
    pushBack(plist, 2);
    insertList(plist, 5);
    pushBack(plist, 3);
    pushBack(plist, 4);
    
    popBack(plist);
    printList(plist);
}

int main()
{
    testList();
    return 0;
}