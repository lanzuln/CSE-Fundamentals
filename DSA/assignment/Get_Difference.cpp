#include <bits/stdc++.h>
using namespace std;

struct Node
{
    long long val;
    Node* next;
};

int main()

{
    Node* head = NULL;
    Node* tail = NULL;

    long long x;
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

    if (head == NULL){
        cout << 0;
        return 0;
    }

    long long maximum = head->val;
    long long minimum = head->val;

    Node* temp = head;
    while (temp != NULL)
    {
        maximum = max(maximum, temp->val);
        minimum = min(minimum, temp->val);
        temp = temp->next;
    }

    cout << maximum - minimum;

    return 0;
}
