#include"queue.h"
#include<cstdlib>
#include<iostream>
using namespace std;

int main()
{
    Queue my_queue;
    int x = 0;
    for(int i = 1 ; i < 5 ; i++)
    {
        my_queue.Push(i);
    }
    my_queue.Print();
    x = my_queue.Pop();
    cout << x << endl;
    x = my_queue.Pop();
    cout << x << endl;
    my_queue.Print();
    for(int i = 1 ; i < 11 ; i++)
        {
            my_queue.Push(i);
        }
        my_queue.Print();

return 0;
}