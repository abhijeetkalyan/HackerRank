/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev
   }
*/
Node* Reverse(Node* head)
{   
    Node *tmp = new Node();
    while (head != NULL){
    tmp = head->next;
    head->next = head->prev;
    head->prev = tmp;
    if (head->prev == NULL) return head;
    head = head->prev;
    }
    return head;
}