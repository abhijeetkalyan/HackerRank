/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{ 
  Node *tmp = new Node();
  Node *tmp2 = new Node();
  tmp2 = NULL;		
  while (head != NULL){
  	tmp = head->next;
  	head->next = tmp2;
  	tmp2 = head;
  	head = tmp;
  }
  return tmp2;
}