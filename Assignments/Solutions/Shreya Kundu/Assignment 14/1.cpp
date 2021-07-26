
int getCount(struct Node* head)
    {  int c=0;
       while(head!=NULL){
           c++;
           head=head->next;
       } 
       return c;
    }
