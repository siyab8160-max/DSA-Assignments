#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};
class DoubleLinkedList
{
    Node *head = NULL;
    int size = 0;

public:
    void insertFront(int x)
    {
        Node *new_node = new Node(x);
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    void insertEnd(int x)
    {
        Node *new_node = new Node(x);
        Node *temp = head;
        while (temp->next != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }
    void deleteFront()
    {
        if (head == NULL)
            return;
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }
    void deleteEnd()
    {
        if (head == NULL)
            return;
        if (head->next == NULL)
            head = NULL;
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
    void print()
    {
        if (head == NULL)
            return;
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void reverse()
    {
        if (head == NULL || head->next == NULL)
            return;
        Node *forward = NULL;
        Node *previous = NULL;
        Node *curr = head;
        while (curr != NULL)
        {
            forward = curr->next;
            curr->next = previous;
            previous = curr;
            curr = forward;
        }
        head=previous;
    }
};
