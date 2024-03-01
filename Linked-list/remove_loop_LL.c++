#include <iostream>
using namespace std;

class List
{
public:
    int data;
    List *next;

    // constructor
    List(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~List()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data:- " << value << endl;
    }
};

// insert from head/start
void insertAtHead(List *&head, List *&tail, int d)
{
    // create new node
    if (head == NULL)
    {
        List *temp = new List(d);
        head = temp;
        tail = temp;
    }
    else
    {
        List *temp = new List(d);
        temp->next = head; // point next pointer of the temp to the previous node
        head = temp;       // change the head to the new node
    }
}

// insert from tail/end
void insertAtTail(List *&tail, List *&head, int d)
{
    if (tail == NULL)
    {
        List *temp = new List(d);
        tail = temp;
        head = temp;
    }
    else
    {

        List *temp = new List(d); // create new node
        tail->next = temp;        // point the previous node to new node
        tail = temp;              // change the tail from previous to new node
    }
}

// insert in middle
void insertAtPosition(List *&head, List *&tail, int position, int d)
{

    // this is case when we insert at starting / head
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

    List *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // inserting at tail
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }

    List *newNode = new List(d);
    newNode->next = temp->next;
    temp->next = newNode;
}

// delete a node

void deleteNode(int position, List *&head, List *&tail)
{

    // deleting first / start node
    if (position == 1)
    {
        List *temp = head;
        head = head->next;
        // free the memory of the node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // delete middle node or last node
        List *curr = head;
        List *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (curr->next == NULL)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(List *&head)
{
    List *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool checkCircular(List *head)
{
    if (head == NULL)
    {
        return 1;
    }
    List *temp = head->next;
    while (temp != NULL)
    {
        if (temp == head)
            return 1;
        temp = temp->next;
    }

    return 0;
}

bool floydCycleDetection(List *head)
{
    if (head == NULL)
        return 0;

    List *slow = head;
    List *fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return 1;
    }

    return 0;
}

List * findLoopNode(List * head){
    if(head == NULL)
        return NULL;
    
    List * slow = head;
    List * fast = head;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast){
            break;
        }
    }
    if(fast == NULL){
        return NULL;
    }

    slow = head;
    while(slow != fast){
        slow = slow -> next;
        fast = fast -> next;
    }
    return fast;

}

void removeLoop(List* head){
    if(head== NULL)
        return;
    
    List* startOfLoop =findLoopNode(head);

    List * temp = startOfLoop;

    while(temp -> next != startOfLoop){
        temp = temp -> next;
    }

    temp -> next = NULL;

}

int main()
{

    // List* node1 = new List(100);

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    List *head = NULL;
    List *tail = NULL;
    insertAtTail(tail, head, 12);
    print(head);
    insertAtTail(tail, head, 14);
    print(head);
    insertAtTail(tail, head, 17);
    print(head);
    insertAtTail(tail, head, 190);
    print(head);
    insertAtPosition(head, tail, 3, 71);
    print(head);
    insertAtPosition(head, tail, 1, 69);
    print(head);
    insertAtPosition(head, tail, 7, 32);
    print(head);
    // deleteNode(7, head, tail);
    // print(head);


    int i = 0;
    List *temp = head;
    // here head node is with value 69 because in above code we added 69 to 1st position in the linked list
    while (i < 2)
    {
        temp = temp -> next;        
        i++;
    }
    tail -> next = temp;

    if (floydCycleDetection(head))
    {
        cout << "Linked list is circular!" << endl;
    }
    else
    {
        cout << "Linked list is not circular!" << endl;
    }

    temp = findLoopNode(head);

    cout << "Starting point of the loop is " << temp -> data << endl;

    removeLoop(head);
    
    print(head);

    if (floydCycleDetection(head))
    {
        cout << "Linked list is circular!" << endl;
    }
    else
    {
        cout << "Linked list is not circular!" << endl;
    }

    // cout << "Head:- " << head->data << endl;
    // cout << "Tail:- " << tail->data << endl;

    return 0;
}