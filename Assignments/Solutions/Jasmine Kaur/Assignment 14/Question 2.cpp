#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data <<" ";
        node = node->next;
    }
    cout<<"\n";
}

class Solution {
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
        if (head == NULL) {
            Node* new_node = new Node(x);
            head = new_node;
            return head;
        }
        Node* new_node = new Node(x);
        new_node->next = head;
        head = new_node;
        return head;
    }

    Node *insertAtEnd(Node *head, int x)  {
        if (head == NULL) {
            Node* new_node = new Node(x);
            head = new_node;
            return head;
        }
        Node* ptr = head;

        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        Node* new_node = new Node(x);
        ptr->next = new_node;
        return head;
    }
};

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i) {
            int data, indicator;
            cin>>data;
            cin>>indicator;
            Solution obj;
            if(indicator)
                head = obj.insertAtEnd(head, data);
            else
                head = obj.insertAtBegining(head, data);
        }
        printList(head);
    }
    return 0;
}
