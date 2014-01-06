/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  Node *tmpNode = head;	
  //List is sorted
  while (head->next != NULL){
  	if (head->data == head->next->data){
  	 head->next = head->next->next;
  	} else {
  		head = head->next;
  	}
  }
  return tmpNode;
}