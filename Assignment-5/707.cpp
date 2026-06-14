#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
class MyLinkedList {
public:
    Node* head;
    MyLinkedList() { head = NULL; }

    int get(int index) {
        Node* temp = head;
        int i = 0;
        while (temp != NULL) {
            if (i == index)
                return temp->data;
            temp = temp->next;
            i++;
        }
        return -1;
    }

    void addAtHead(int val) {
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }

    void addAtTail(int val) {
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* temp = head;
        for (int i = 0; i < index - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        Node* new_node = new Node(val);
        new_node->next = temp->next;
        temp->next = new_node;
    }

    void deleteAtIndex(int index) {
        if (head == NULL)
            return;
        if (index == 0) {
            Node* del = head;
            head = head->next;
            delete del;
            return;
        }
        Node* temp = head;
        for (int i = 0; i < index - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp == NULL || temp->next == NULL)
            return;
        Node* del = temp->next;
        temp->next = del->next;
        delete del;
    }
};
