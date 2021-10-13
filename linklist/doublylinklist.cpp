
#include <iostream>
using namespace std;


class List
{
private:
    typedef struct node
    {
        int data;
        node *next;
        node *prev;
    } *nodePtr;
    
    nodePtr head;
    nodePtr tail;
    nodePtr temp;
   
    
public:
    List()
    {
        head = NULL;
        tail = NULL;
        temp = NULL;
    }
    
    void addNode(int addN)
    {
        nodePtr n = new node;
        n -> data = addN;
        n -> prev = NULL;
        n -> next = NULL;
        //head = n;
        //tail = n;
        //tail -> next = NULL;
        
        if (head != NULL)
        {
            tail = head;
            temp = NULL;
            
            while (tail -> next != NULL)
            {
                temp = tail;
                tail = tail->next;
            }
            tail->next = n;
        }
        else
        {
            head = n;
        }
    }
    
    void PrintList()
    {
        tail = head;
        if (tail != NULL)
        {
            cout << "List is empty\n";
        }
        
        while(tail != NULL)
        {
            cout << tail->data << endl;
            tail = tail->next;
        }
    }
};


    int main()
    {
        List number;
        
        number.addNode(1);
        number.addNode(3);
        number.addNode(4);
        number.addNode(9);
        
        number.PrintList();
    }
