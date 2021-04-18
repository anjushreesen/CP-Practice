#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode
{
public:
    int data;
    SinglyLinkedListNode *next;

    SinglyLinkedListNode(int node_data)
    {
        this->data = node_data;
        this->next = nullptr;
    }
};

class SinglyLinkedList
{
public:
    SinglyLinkedListNode *head;

    SinglyLinkedList()
    {
        this->head = nullptr;
    }
};

void print_singly_linked_list(SinglyLinkedListNode *node, string sep, ofstream &fout)
{
    while (node)
    {
        fout << node->data;

        node = node->next;

        if (node)
        {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode *node)
{
    while (node)
    {
        SinglyLinkedListNode *temp = node;
        node = node->next;

        free(temp);
    }
}


SinglyLinkedListNode *insertNodeAtTail(SinglyLinkedListNode *head, int data)
{
    SinglyLinkedListNode *news, *p;

    news = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    p = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));

    p->next = head;

    news->data = data;
    news->next = NULL;

    if(!head){
        head = news;
    } else {
        while (p->next!=NULL)
        {
            p = p->next;
        }
        
        p->next = news;
    }

    return head;
    
}

int main()