#include<cstdlib>
#include<iostream>
using namespace std;

class Queue
{
private:
    //Variables
    int* Q;
    int capacity;
    int length;

public:
    //Consructor
    Queue()
    {
        Q = new int[10];
        for(int i = 0 ; i < 10 ; i++)
        {
            Q[i] = 0;
        }
        capacity = 10;
        length = 0;
    }
        //Deconsructor
    ~Queue()
    {
        delete[] Q;
    }

    //--------------
    //Methods
    //--------------

    //Print Queue
    void Print()
    {
        for(int i = 0 ; i < capacity ; i++)
        {
            cout << Q[i] << ",";
        }
        cout << Q[capacity-1] << endl;
    }


    //Push Element into beginning of Queue
    void Push(int val)
    {
        for(int i = length ; i > 0 ; i--)
        {
            Q[i] = Q[i-1];
        }
        Q[0] = val;
        length++;
        Check();
    }


        //Pop Element from end of Queue
    int Pop()
    {
        int val = 0;
        val = Q[length-1];
        Q[length-1] = 0;
        length--;
        return val;
    }

    //Checks if Queue is Almost full, if so, Queue Size Doubles
    void Check()
    {
        if(capacity - length == 1)
        {
            int* Temp = new int[capacity];
            for(int i = 0 ; i < capacity ; i++)
            {
                Temp[i] = 0;
            }
            for(int i = 0 ; i < length ; i++)
            {
                Temp[i] = Q[i];
            }
            delete[] Q;
            capacity *= 2;
            Q = new int[capacity];
            for(int i = 0 ; i < capacity ; i++)
            {
                Q[i] = 0;
            }
            for(int i = 0 ; i < length ; i++)
            {
                Q[i] = Temp[i];
            }
            delete[] Temp;
        }
    }

};







