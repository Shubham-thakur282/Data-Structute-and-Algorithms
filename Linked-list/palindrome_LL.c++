#include <bits/stdc++.h>

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

int solve1(Node *head)
{
    Node *temp = head;
    int sum = 0;
    while (temp != NULL)
    {
        sum = (sum * 10) + temp->data;
        temp = temp->next;
    }
    return sum;
}

int solve2(Node *head)
{
    if (head->next == NULL)
    {
        return head->data;
    }

    return solve2(head->next) * 10 + head->data;
}

bool palindrome(Node *head)
{
    int sum1 = solve1(head);
    int sum2 = solve2(head);

    if (sum1 == sum2)
        return 1;

    return 0;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head -> next -> next ->next = new Node(2);
    head -> next -> next -> next -> next = new Node(1);
    // head -> next -> next -> next -> next -> next = new Node(1);
    // head -> next -> next -> next -> next -> next -> next = new Node(0);
    // head -> next -> next -> next -> next -> next -> next -> next = new Node(0);
    // head -> next -> next -> next -> next -> next -> next -> next -> next = new Node(1);
    // head -> next -> next -> next -> next -> next -> next -> next -> next -> next = new Node(2);
    // head -> next -> next -> next -> next -> next -> next -> next -> next -> next -> next = new Node(0);

    // duplicates(head);
    print(head);

    if(palindrome(head)){
        cout << "Linked List is a Palindrome." << endl;
    }else{
        cout << "Linked List is not a Palindrome." << endl;
    }

    // sort(head);
    // print(head);

    return 0;
}