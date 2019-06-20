#include "singly_linked_list.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{

    LINKED_LIST ll;

    ll.Print();
    ll.Insert_End(5);
    ll.Insert_End(4);
    ll.Print();
    ll.Insert_End(3);
    ll.Insert_End(2);
    ll.Insert_End(1);
    ll.Print();
    ll.Delete_Node(2);
    ll.Print();




return 0;
}