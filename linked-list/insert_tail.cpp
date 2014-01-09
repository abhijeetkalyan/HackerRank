/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
	if (head == NULL){
		Node *last = new Node();
		last->data = data;
        last->next = NULL;
		return last;
	} else {
		Node *tmp = new Node();
		tmp = head;
		while(head->next != NULL){
			head = head->next;
		}
		Node *last = new Node();
		last->data = data;
        last->next = NULL;
		head->next = last;

		return tmp;
	} 

}