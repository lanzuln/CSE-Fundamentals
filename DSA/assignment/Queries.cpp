#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node* next;
};

// print linked list
void printList(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// insert at head
void add_first(Node* &head, Node* &tail, int v)
{
    Node* newNode = new Node;
    newNode->val = v;
    newNode->next = head;
    head = newNode;

    if (tail == NULL)
        tail = newNode;
}

// insert at tail
void add_last(Node* &head, Node* &tail, int v)
{
    Node* newNode = new Node;
    newNode->val = v;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

// delete at index
void deleteByRandom(Node* &head, Node* &tail, int idx)
{
    if (head == NULL)
        return;

    if (idx == 0)
    {
        Node* del = head;
        head = head->next;
        delete del;

        if (head == NULL)
            tail = NULL;

        return;
    }

    Node* temp = head;
    for (int i = 0; i < idx - 1 && temp->next != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
        return;

    Node* del = temp->next;
    temp->next = del->next;

    if (del == tail)
        tail = temp;

    delete del;
}

int main()
{
    int Q;
    cin >> Q;

    Node* head = NULL;
    Node* tail = NULL;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
            add_first(head, tail, V);
        else if (X == 1)
            add_last(head, tail, V);
        else if (X == 2)
            deleteByRandom(head, tail, V);

        printList(head);
    }

    return 0;
}
