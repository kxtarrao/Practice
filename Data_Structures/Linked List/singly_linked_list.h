#include <cstdlib>
#include <iostream>
using namespace std;

//================================================================================

// Singly Linked List Node
class NODE
{
    public:
    // Variables
    int data;
    NODE* next;
};

//================================================================================

// Singly Linked List
class LINKED_LIST
{
    private:
    // Variables
    NODE* root;
    int length;

    public:

    // Constructor
    LINKED_LIST()
    {
        root = NULL;
        length = 0;
    }

    //Deconstructor
    ~LINKED_LIST()
    {
        NODE* node_to_delete = NULL;
        while( root == NULL)
        {
            node_to_delete = root;
            root = root -> next;
            delete node_to_delete;
        }
    }


    // Method Definitions
    // Return Length of Linked List
    void Length()
    {
        cout << length << endl;
    }


    // Add Node to End of Linked List
    void Insert_End( int val )
    {
        // instantiate node and insert data
        NODE* new_node = new NODE( );
        new_node -> data = val;
        new_node -> next = NULL;

        // make first node
        if( root == NULL )
        {
            root = new_node;
        }
        // place node at end
        else
        {
            // Traverse Linked List
            NODE* temp = root;
            while( temp -> next != NULL )
            {
                temp = temp -> next;
            }
            // Place Node at End
            temp -> next = new_node;
        }

        length++;
    }

    // Add Node to Beginning of Linked List
    void Insert_Beg( int val )
    {
        // instantiate node and insert data
        NODE* new_node = new NODE();
        new_node -> data = val;

        // Place Node at Beginning
        new_node -> next = root;
        root = new_node;

        length++;
    }


    // Add Node to Particular Position
    void Insert_After( int val, int pos )
    {
        if(pos < 0 || pos > length)
        {
            cout << "Failed. Position Out Of Range" << endl;
        }
        else
        {
            // instantiate node and insert data
            NODE* new_node = new NODE();
            new_node -> data = val;

            NODE* temp = root;
            for(int i = 0; i < pos; i++)
            {
                temp = temp -> next;
            }
            new_node -> next = temp -> next;
            temp -> next = new_node;
            length++;
        }
    }

    // Delete From End of Linked List
    void Delete_End()
    {
        if(root == NULL)
        {
            cout << "Failed. No Node to Delete" << endl;
        }
        else if(root -> next == NULL)
        {
            delete root;
            root = NULL;
            length--;
        }
        else
        {
            NODE* temp = root;
            while(temp -> next -> next != NULL)
            {
                temp = temp -> next;
            }
            delete temp -> next;
            temp -> next = NULL;
            length--;
        }
    }


    // Delete From Beginning of Linked List
    void Delete_Beg()
    {
        // error, no node to delete
        if(root == NULL)
        {
            cout << "Failed. No Node to Delete" << endl;
        }
        else
        {
            NODE* temp = root;
            root = root -> next;
            delete temp;
            length--;
        }
    }

    // Delete Node at Particular Position
    void Delete_Node(int pos)
    {
        if(pos < 0 || pos > length)
        {
            cout << "Failed. Position Out Of Range" << endl;
        }
        else
        {
            NODE* temp = root;
            NODE* node_to_delete = NULL;
            for(int i = 0; i < pos - 1; i++)
            {
                temp = temp -> next;
            }
            node_to_delete = temp -> next;
            temp -> next = temp -> next -> next;
            delete node_to_delete;
            length--;
        }
    }

    // Prints Contents of Linked List
    void Print()
    {
        if(root == NULL)
        {
            cout << "List is Empty" << endl;
        }
        else
        {
            // Traverse Linked List
            NODE* temp = root;
            while( temp -> next != NULL )
            {
                cout << temp -> data << ",";
                temp = temp -> next;
            }
            cout << temp -> data << endl;
        }
    }
};













