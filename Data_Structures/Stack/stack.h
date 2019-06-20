#include <cstdlib>
#include <iostream>
using namespace std;

class STACK
{
    private:
    //Variables
    int capacity;
    int length;
    int* Contents;
    int* Temp_List;
    int current_index;

    public:
    //Constructor
    STACK()
    {
        capacity = 10;
        length = 0;
        current_index = -1;
        Contents = new int[10];
        Temp_List = new int[10];
    }
    ~STACK()
    {
        delete[] Contents;
        delete[] Temp_List;
    }

    void Push(int val)
    {
        Check();
        Contents[current_index + 1] = val;
        current_index++;
        length++;
    }


    int Pop()
    {
        int val;
        val = Contents[current_index];
        Contents[current_index] = 0;
        length--;
        current_index--;
        return val;
    }

    void Print()
    {
        for(int i = 0 ; i < length-1 ; i++)
        {
            cout << Contents[i] << ",";
        }
        cout << Contents[length-1] << endl;
    }


    void Check()
    {
        if( capacity - length == 0 )
        {
            for(int i = 0 ; i < capacity ; i++)
            {
                Temp_List[i] = 0;
            }
            for(int i = 0 ; i < length ; i++)
            {
                Temp_List[i] = Contents[i];
            }
            delete[] Contents;
            capacity *= 2;
            Contents = new int[capacity];
            for(int i = 0 ; i < capacity ; i++)
            {
                Contents[i] = 0;
            }
            for(int i = 0 ; i < length ; i++)
            {
                Contents[i] = Temp_List[i];
            }
            delete[] Temp_List;
            Temp_List = new int[capacity];

        }
    }


};