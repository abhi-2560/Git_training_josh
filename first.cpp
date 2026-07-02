#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // Create linked list: 1 -> 2 -> 3 -> 4
    Node *head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{4, nullptr};

    cout << "List: ";
    printList(head);
    
}