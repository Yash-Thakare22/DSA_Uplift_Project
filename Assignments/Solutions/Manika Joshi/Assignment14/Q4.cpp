Node* insertInMiddle(Node* head, int x)
{
        Node* temp=head;
     
    Node *num=new Node(x);
    
   
    Node* slow = head;
        Node* fast = head->next;
        
     while (fast && fast->next) {
         
            slow = slow->next;
 
          
            fast = fast->next->next;
        }
         num->next = slow->next;
        slow->next = num;
        
        return head;

}
