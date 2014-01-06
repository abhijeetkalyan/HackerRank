/*
  Insert Node at a given position in a linked list 
  The linked list will not be empty and position will always be valid
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  if (position == 0){
    Node *first = new Node();
    first->data = data;
    first->next = head;
    return first;
  } else {
    Node *tmp = new Node();
    tmp = head;
    while (position > 1){
      head = head->next;
      position--;
    }
    Node *mid = new Node();
    mid->data = data;
    mid->next = head->next;
    head->next = mid;
    return tmp;
  }
}