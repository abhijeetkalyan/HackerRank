/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  if (headA->data != headB->data){
    return 0;
  }else {
    if ((headA->next != NULL) && (headB->next == NULL)){
      return 0; }
    if ((headA->next == NULL) && (headB->next != NULL)){
      return 0;
    }
    if ((headA->next == NULL) && (headB->next == NULL)){
      return 1;
    }
  }
  CompareLists(headA->next, headB->next);    
}