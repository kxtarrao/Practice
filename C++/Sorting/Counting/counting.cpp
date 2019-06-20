#include<cstdlib>
#include<iostream>
using namespace std;

//Prints Contents Of Array
void Print_Array(int A[], int a_length)
{
    for(int i = 0 ; i < a_length - 1 ; i++)
    {
        cout << A[i] << ",";
    }
    cout << A[a_length-1] << endl;
}


//Counting Sort Algorithm
void Counting_Sort(int A[], int a_length)
{
    //Find Max and Min Element in Array
    int max = A[0];
    int min = A[0];
    for(int i = 0 ; i < a_length ; i++)
    {
        if(A[i] > max)
        {
            max = A[i];
        }
        if(A[i] < min)
        {
            min = A[i];
        }
    }
    cout << max << " " << min << endl;

    //Create Tally List (T)
    int t_length = max - min + 1;
    int T[t_length];
    for(int i = 0 ; i < t_length ; i++)
    {
        T[i] = 0;
    }
    for(int i = 0 ; i < a_length ; i++)
    {
        T[ A[i] - min ]++;
    }
    Print_Array(T,t_length);

    //Sort List into A
    int a_i = 0;
    int t_i = 0;
    while(a_i < a_length)
    {
        if(T[t_i] > 0)
        {
            A[a_i] = t_i + min;
            a_i++;
            T[t_i]--;
        }
        if(T[t_i] == 0)
        {
            t_i++;
        }
    }
}

// Sorts and Prints an Arbitrary Array
int main()
{
    int A[] = {3,2,1,6,5,4,9,8,7};
    int a_length = 9;
    Counting_Sort(A,a_length);
    Print_Array(A,a_length);

return 0;
}


