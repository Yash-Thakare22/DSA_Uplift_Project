// Question Link: https://practice.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main() {
    int T, n, x;
    cin>>T;
    while(T--) {
        cin>> n >> x;

        struct Node *head = new Node(x);
        struct Node *tail = head;

        for (int i=0; i<n-1; i++) {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }

        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}
// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x) {
    Node* tmp1 = new Node(x);
    Node* tmp2 = head;
    int len = 0;
    while (tmp2 != NULL) {
        len++;
        tmp2 = tmp2->next;
    }
    int c = ((len % 2) == 0) ? (len / 2) : (len + 1) / 2;
    tmp2 = head;
    while (c-- > 1)
        tmp2 = tmp2->next;
    tmp1->next = tmp2->next;
    tmp2->next = tmp1;
    return head;
}
