#include "stack.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    STACK my_stack;

    for(int i = 0 ; i < 5 ; i++)
    {
        my_stack.Push(i);
    }
    my_stack.Print();

    int x = my_stack.Pop();
    my_stack.Print();
    cout << x << endl;

    x = my_stack.Pop();
    my_stack.Print();
    cout << x << endl;

    for(int i = 0 ; i < 10 ; i++)
    {
        my_stack.Push(i);
    }
    my_stack.Print();

return 0;
}