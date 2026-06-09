#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class LinkedList : public Node
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    void insertFront(int x)
    {
        Node *new_node = new Node();
        new_node->data = x;
        new_node->next = head;
        head = new_node;
    }
    void insertEnd(int x)
    {
        Node *new_node = new Node();
        new_node->data = x;
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void insertPosition(int pos, int x)
    {
        if (pos == 1)
        {
            Node *temp = new Node();
            temp->data = x;
            temp->next = head;
            head = temp;
            return;
        }
        Node *temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        Node *node = new Node();
        temp->data = x;
        node->next = temp->next;
        temp->next = node;
    }
    void deleteFront()
    {
        if (head == NULL)
            return;
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    void deleteLast()
    {
        if (head == NULL)
            return;
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    void deletePosition(Node *&head, int pos)
    {
        if (head == NULL)
            return;
        if (pos == 1)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node *curr = head;
        for (int i = 1; i < pos - 1 && curr != NULL; i++)
        {
            curr = curr->next;
        }
        if (curr == NULL || curr->next == NULL)
            return;
        Node *temp = curr->next;
        curr->next = temp->next;
    }
    bool search(int key)
    {
        Node *temp = head;
        bool flag = false;
        while (temp != NULL)
        {
            if (temp->data == key)
                flag = true;
            temp = temp->next;
        }
        if (flag)
            return true;
        else
            return false;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int length()
    {
        int len = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }
    int sum()
    {
        int s = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            s += temp->data;
            temp = temp->next;
        }
        return s;
    }
    int maximum()
    {
        int maxi = head->data;
        Node *temp = head;
        while (temp != NULL)
        {
            if (maxi < temp->data)
                maxi = temp->data;
            temp = temp->next;
        }
        return maxi;
    }
    int minimum()
    {
        int mini = head->data;
        Node *temp = head;
        while (temp != NULL)
        {
            if (mini > temp->data)
                mini = temp->data;
            temp = temp->next;
        }
        return mini;
    }
    double average()
    {
        return sum() / length();
    }
    int countEven()
    {
        int c = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data % 2 == 0)
                c++;
            temp = temp->next;
        }
        return c;
    }
    int countOdd()
    {
        int c = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data % 2 != 0)
                c++;
            temp = temp->next;
        }
        return c;
    }
    void update(int oldValue, int newValue)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == oldValue)
                temp->data = newValue;
            temp = temp->next;
        }
    }
    // int findMiddle()
    // {
    // }
    bool isSorted()
    {
        Node *temp = head;
        bool flag = true;
        while (temp->next != NULL)
        {
            if (temp->data > (temp->next)->data)
                flag = false;
            temp = temp->next;
        }
        if (flag)
            return true;
        else
            return false;
    }
};
int main()
{
    
}