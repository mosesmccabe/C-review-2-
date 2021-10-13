
#include <iostream>
using namespace std;


class List
{
    private:
        typedef struct node
        {
            int data;
            node *next;
        } *nodePtr;
    
        nodePtr head;
        nodePtr curr;
        nodePtr temp;
    
    public:
        List()
        {
            head = NULL;
            curr = NULL;
            temp = NULL;
        }
    
        void AddNode(int addN)
        {
            nodePtr n = new node;
            n->next = NULL;
            n->data = addN;
            
            // we already have a node created
            if (head != NULL)    // <-- if head is pointing to an object, we have a list do nothing.
            {
                curr = head;
                
                // check to see if we at the end
                // of the list
                while (curr->next != NULL)
                {
                    curr = curr->next;
                }
                curr->next = n;
            }
            else
            {
                head = n;   // the new node is the only node in the list
            }
        }
    
        void  insertNode( int insData)
        {
            // Crate a new node and store insData
            nodePtr n = new node;
            n->data = insData;
            n->next = NULL;
            
            
            
            // we already have a node created
            if (head != NULL)    // <-- if head is pointing to an object, we have a list do nothing.
            {
                curr = head;
                
                // Initialize temp to NULL
                temp = NULL;
                
                // check to see if we at the end
                // of the list
                while (curr != NULL && curr->data < insData)
                {
                    temp = curr;
                    curr = curr->next;
                }
                //curr->next = n;
                
                // If the new node is to be the 1st in the list,
                // insert it before all other nodes.
                if (temp == NULL)
                {
                    head = n;
                    n->next = curr;
                }
                else
                {
                    temp->next = n;
                    n->next = curr;
                }
            }
            else
            {
                head = n;   // the new node is the only node in the list
            }
        }
    
        void DeleteNode( int delData )
        {
            // Create a delete pointer
            nodePtr delPtr = NULL;
            temp = head;
            curr = head;
            
            // set the curr ptr to where the node equal to user input
            // set the temp ptr to the previous value.
            while ( curr != NULL && curr->data != delData)
            {
                temp = curr;
                curr = curr->next;
            }
            // if user input not found
            if (curr == NULL)
            {
                cout << delData << " was not in the list\n";
                delete delPtr;
            }
            else
            {
                delPtr = curr;
                curr = curr->next;
                temp->next = curr;
                if (delPtr == head)
                {
                    head = head->next;
                    temp = NULL;
                }
                delete delPtr;
                cout << "The value " << delData << " was deleted\n";
            }
        }
    
        ~List()
        {
            // Position nodePtr at the head of the list.
            temp = head;
            
            while (temp != NULL)
            {
                // Save a pointer to the next node
                curr = temp->next;
                
                // Delete the current node
                delete temp;
                
                // position nodePtr at the next node
                temp = curr;
            }
        }
    
        void PrintList()
        {
            curr = head;
            if (curr == NULL)
            {
                cout << "List is empty\n";
            }

            while(curr != NULL)
            {
                cout << curr->data << "\n";
                curr = curr->next;
            }
        }
        
};

int main ()
{
    List IntNumber;
    
    enum { one = 1, two, three, four, five, six };
    int Option, tempT;
    char Replay = 'y';
    
    
    
    while (Replay == 'y' || Replay == 'Y')
    {
    cout << "Please Select a Option\n"
         << "1 - Add a Value to the List\n"
         << "2 - Insert a Value in the List\n"
         << "3 - Delete a Value from the list\n"
         << "4 - Print List\n"
         << "5 - Destroy the List\n"
         << "6 - End Program\n"
         << "Enter Option: ";
    cin >> Option;
    
    switch (Option)
    {
        case one:
            int addSize;
            cout << "How many value you wish to add: ";
            cin >> addSize;
            
            for (int n = 0; n < addSize; n++)
            {
                cout << "Enter value: ";
                cin >> tempT;
                IntNumber.AddNode(tempT);
            }
            
            cout << "\nReturn to Menu: ";
            cin >> Replay;
            
            break;
        case two:
            cout << "Enter value to be added to list: ";
            cin >> tempT;
            
            IntNumber.insertNode(tempT);
            
            cout << "\nReturn to Menu: ";
            cin >> Replay;
            
            break;
        case three:
            cout << "Enter value you wish to delete: ";
            cin >> tempT;
            
            IntNumber.DeleteNode(tempT);
            
            cout << "\nReturn to Menu: ";
            cin >> Replay;
            
            break;
        case four:
            IntNumber.PrintList();
            
            cout << "\nReturn to Menu: ";
            cin >> Replay;
            
            break;
        case five:
            cout << "List is Destroy\n\n";
            
            IntNumber.~List();
            
            IntNumber.PrintList();
            
            cout << "\nReturn to Menu: ";
            cin >> Replay;
            
            break;
        case six:
            cout << "\t\t\n\nProgram is Ending\n\n";
            Replay = 'n';
            
            break;
            
            
        default:
            cout << Option << " is not a valid input\n";
            
            cout << "\nReturn to Menu: ";
            cin >> Replay;
    }
    }
    
    
    return 0;
}