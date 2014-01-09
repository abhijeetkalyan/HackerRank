/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev
   }
*/
Node* SortedInsert(Node *head,int data)
{
   Node *node1 = new Node();
   Node *tmpNode = head;
   node1->data = data; 
   node1->next = NULL;
   node1->prev = NULL;

   if (head == NULL) return node1;

   if (data <= head->data) {
    node1->next = head;
    head->prev = node1;
    return node1;
   } else {
    while (head != NULL){
      if (data <= head->data){
        node1->prev = head->prev;
        node1->next = head;
        head->prev->next = node1;
        head->prev = node1;
        return tmpNode;
      } 
      if (head->next == NULL){
        node1->prev = head;
        head->next = node1;
        return tmpNode;
      }

     head = head->next;

    }

   }
}