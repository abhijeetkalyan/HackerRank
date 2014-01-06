/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  if (position == 0){
    head = head->next;
    return head;
  } else {
    Node *tmp = new Node();
    tmp = head;
    while (position > 1){
      head = head->next;
      position--;
    }
    head->next = head->next->next;
    return tmp;
  }
}