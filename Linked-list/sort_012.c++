#include<bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node()
    {
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    // ~Node()
    // {
    //     int value = this->data;
    //     // memory free
    //     if (this->next != NULL)
    //     {
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout << "Memory is free for node with data:- " << value << endl;
    // }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void duplicates(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }

    unordered_set<int> seen;
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        if (seen.find(curr->data) != seen.end())
        {
            prev->next = curr->next;
            delete curr;
        }
        else
        {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev -> next;
    }
}

void sort(Node* &head){
    // Approach 1
    // data is replaced node remains at same place
    Node* temp = head;
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;

    while(temp!=NULL){
        if(temp -> data == 0){
            countZero++;
        }else if(temp -> data == 1){
            countOne++;
        }else if(temp -> data == 2){
            countTwo++;
        }
        temp = temp -> next;
    }

    temp = head;
    int count = 0;
    while(count < countZero){
        temp -> data = 0;
        temp = temp -> next;
        count++;
    }
    count = 0;
    while(count < countOne){
        temp -> data = 1;
        temp = temp -> next;
        count++;
    }
    count = 0;
    while(count < countTwo){
        temp -> data = 2;
        temp = temp -> next;
        count++;
    }

}

// approach 2nd 
void sort2(Node * head){
    // done without replacement of data instead node are replaced
    Node * zero = new Node(0);
    Node * one = new Node(1);
    Node * two = new Node(2);

    Node * temp  = head;

    Node * temp0 = zero;
    Node * temp1 = one;
    Node * temp2 = two;

    while(temp != NULL){
        if(temp -> data == 0){
            temp0 -> next = temp;
            temp0 = temp0 -> next;
        }
        if(temp -> data == 1){
            temp1 -> next = temp;
            temp1 = temp1 -> next;
        }
        if(temp -> data == 2){
            temp2 -> next = temp;
            temp2 = temp2 -> next;
        }
        temp = temp -> next;
    }

    if(one -> next != NULL)
        temp0 -> next = one -> next;
    else
        temp0 -> next = two -> next;

    if(two -> next != NULL)
        temp1 -> next = two -> next;

    temp2 -> next = NULL;
    
    head = zero -> next;
    
    delete zero;
    delete one;
    delete two;

    

}

int main(){
    Node * head = new Node(1);
    head -> next = new Node(0);
    head -> next -> next = new Node(2);
    head -> next -> next ->next = new Node(1);
    head -> next -> next -> next -> next = new Node(2);
    head -> next -> next -> next -> next -> next = new Node(1);
    head -> next -> next -> next -> next -> next -> next = new Node(0);
    head -> next -> next -> next -> next -> next -> next -> next = new Node(0);
    head -> next -> next -> next -> next -> next -> next -> next -> next = new Node(1);
    head -> next -> next -> next -> next -> next -> next -> next -> next -> next = new Node(2);
    head -> next -> next -> next -> next -> next -> next -> next -> next -> next -> next = new Node(0);


    // duplicates(head);
    print(head);
    sort(head);
    print(head);

    return 0;
}