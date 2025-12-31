#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node* next;
};


void finalList(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}


void removeRepeatValue(Node* head)
{
    Node* curr = head;


    while (curr != NULL)
    {
        Node* prev = curr;
        Node* temp = curr->next;

        
        while (temp != NULL)
        {
            if (temp->val == curr->val)
            {
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }

        curr = curr->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int x;
    cin >> x;

    while (x != -1)
    {
        Node* newNode = new Node;
        newNode->val = x;
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

        cin >> x;
    }

    removeRepeatValue(head);

    finalList(head);

    return 0;
}
